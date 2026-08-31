
        /*
                * 
                *  AllBinary Open License Version 1
                *  Copyright (c) 2011 AllBinary
                *  
                *  By agreeing to this license you and any business entity you represent are
                *  legally bound to the AllBinary Open License Version 1 legal agreement.
                *  
                *  You may obtain the AllBinary Open License Version 1 legal agreement from
                *  AllBinary or the root directory of AllBinary's AllBinary Platform repository.
                *  
                *  Created By: Travis Berthelot  
        */
        
        /* Generated Code Do Not Modify */
        



        #ifndef ORG_ALLBINARY_INPUT_AUTOMATION_MODULE_DEFAULTLISTMODELHELPER_H
        #define ORG_ALLBINARY_INPUT_AUTOMATION_MODULE_DEFAULTLISTMODELHELPER_H

            #include "../../../../../java/lang/Object.h"
        
            #include "../../../../../java/lang/Exception.h"
        
#include <java/util/Vector.h>

      
#include <javax/swing.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "DefaultListModel.h"
#include "ListModel.h"

class DefaultListModelHelper
            : public Object
         {
        

    private: defaultListModel: DefaultListModel;

    private: vector: Vector;

public constructor ();

    public initDefaultModelList();

    public ListModel getListModel();

    public add(string string);

    public remove(string string);

};

            


        #endif //ORG_ALLBINARY_INPUT_AUTOMATION_MODULE_DEFAULTLISTMODELHELPER_H
