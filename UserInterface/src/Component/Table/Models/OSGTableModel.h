/*---------------------------------------------------------------------------*\
 *                     OpenSG ToolBox UserInterface                          *
 *                                                                           *
 *                                                                           *
 *                                                                           *
 *                                                                           *
 *                         www.vrac.iastate.edu                              *
 *                                                                           *
 *   Authors: David Kabala, Alden Peterson, Lee Zaniewski, Jonathan Flory    *
 *                                                                           *
\*---------------------------------------------------------------------------*/
/*---------------------------------------------------------------------------*\
 *                                License                                    *
 *                                                                           *
 * This library is free software; you can redistribute it and/or modify it   *
 * under the terms of the GNU Library General Public License as published    *
 * by the Free Software Foundation, version 2.                               *
 *                                                                           *
 * This library is distributed in the hope that it will be useful, but       *
 * WITHOUT ANY WARRANTY; without even the implied warranty of                *
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU         *
 * Library General Public License for more details.                          *
 *                                                                           *
 * You should have received a copy of the GNU Library General Public         *
 * License along with this library; if not, write to the Free Software       *
 * Foundation, Inc., 675 Mass Ave, Cambridge, MA 02139, USA.                 *
 *                                                                           *
\*---------------------------------------------------------------------------*/
/*---------------------------------------------------------------------------*\
 *                                Changes                                    *
 *                                                                           *
 *                                                                           *
 *                                                                           *
 *                                                                           *
 *                                                                           *
 *                                                                           *
\*---------------------------------------------------------------------------*/

#ifndef _OSGTABLEMODEL_H_
#define _OSGTABLEMODEL_H_
#ifdef __sgi
#pragma once
#endif

#include <OpenSG/OSGConfig.h>
#include "OSGUserInterfaceDef.h"

#include "OSGTableModelBase.h"
#include <boost/any.hpp>

#include "Component/Table/OSGTableModelListener.h"
#include <typeinfo>

#include <OpenSG/Input/OSGEventConnection.h>

OSG_BEGIN_NAMESPACE

/*! \brief TableModel class. See \ref 
           PageUserInterfaceTableModel for a description.
*/

class OSG_USERINTERFACELIB_DLLMAPPING TableModel : public TableModelBase
{
  private:

    typedef TableModelBase Inherited;

    /*==========================  PUBLIC  =================================*/
  public:

    /*---------------------------------------------------------------------*/
    /*! \name                      Sync                                    */
    /*! \{                                                                 */

    virtual void changed(BitVector  whichField, 
                         UInt32     origin    );

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                     Output                                   */
    /*! \{                                                                 */

    virtual void dump(      UInt32     uiIndent = 0, 
                      const BitVector  bvFlags  = 0) const;

    /*! \}                                                                 */
    //Adds a listener to the list that is notified each time a change to the data model occurs.
    virtual EventConnection addTableModelListener(TableModelListenerPtr l) = 0;
	virtual bool isTableModelListenerAttached(TableModelListenerPtr l) const = 0;
    
    //Removes a listener from the list that is notified each time a change to the data model occurs.
    virtual void removeTableModelListener(TableModelListenerPtr l) = 0;
    
    //Returns the number of columns in the model.
    virtual UInt32 getColumnCount(void) const = 0;
    
    //Returns the name of the column at columnIndex.
    virtual boost::any getColumnValue(UInt32 columnIndex) const = 0;
    
    //Returns the number of rows in the model.
    virtual UInt32 getRowCount(void) const = 0;
    
    //Returns the value for the cell at columnIndex and rowIndex.
    virtual boost::any getValueAt(UInt32 rowIndex, UInt32 columnIndex) const = 0;
    
    //Returns true if the cell at rowIndex and columnIndex is editable.
    virtual bool isCellEditable(UInt32 rowIndex, UInt32 columnIndex) const = 0;
    
    //Sets the value in the cell at columnIndex and rowIndex to aValue.
    virtual void setValueAt(const boost::any& aValue, UInt32 rowIndex, UInt32 columnIndex) = 0;

    //Returns the most specific superclass for all the cell values in the column.
    virtual const std::type_info& getColumnType(const UInt32& columnIndex) = 0;
    /*=========================  PROTECTED  ===============================*/
  protected:

    // Variables should all be in TableModelBase.

    /*---------------------------------------------------------------------*/
    /*! \name                  Constructors                                */
    /*! \{                                                                 */

    TableModel(void);
    TableModel(const TableModel &source);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                   Destructors                                */
    /*! \{                                                                 */

    virtual ~TableModel(void); 

    /*! \}                                                                 */
    
    /*==========================  PRIVATE  ================================*/
  private:

    friend class FieldContainer;
    friend class TableModelBase;

    static void initMethod(void);

    // prohibit default functions (move to 'public' if you need one)

    void operator =(const TableModel &source);
};

typedef TableModel *TableModelP;

OSG_END_NAMESPACE

#include "OSGTableModelBase.inl"
#include "OSGTableModel.inl"

#define OSGTABLEMODEL_HEADER_CVSID "@(#)$Id: FCTemplate_h.h,v 1.23 2005/03/05 11:27:26 dirk Exp $"

#endif /* _OSGTABLEMODEL_H_ */
