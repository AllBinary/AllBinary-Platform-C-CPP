
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

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
class BasicArrayList;
class BasicArrayListD;
#include <javax/swing.h>

















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        class DefaultListModel;
class ListModel;

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class DefaultListModelHelper
            : public virtual Object
         {

    private: DefaultListModel* defaultListModel;

    private: BasicArrayList* vector;

public: DefaultListModelHelper();

    public: void initDefaultModelList();

    public: ListModel* getListModel();

    public: void add(std::string string);

    public: void remove(std::string string);

};

            


        #endif //ORG_ALLBINARY_INPUT_AUTOMATION_MODULE_DEFAULTLISTMODELHELPER_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_INPUT_AUTOMATION_MODULE_DEFAULTLISTMODELHELPER_H_COMPLETE)
        #define ORG_ALLBINARY_INPUT_AUTOMATION_MODULE_DEFAULTLISTMODELHELPER_H_COMPLETE
        #if __has_include(<org/allbinary/util/BasicArrayList.h>)
#include <org/allbinary/util/BasicArrayList.h>
#endif
#if __has_include(<org/allbinary/util/BasicArrayListD.h>)
#include <org/allbinary/util/BasicArrayListD.h>
#endif
#if __has_include(<javax/swing.h>)
#include <javax/swing.h>
#endif

#if __has_include("org/allbinary/input/automation/module/DefaultListModel.h")
#include "org/allbinary/input/automation/module/DefaultListModel.h"
#endif
#if __has_include("org/allbinary/input/automation/module/ListModel.h")
#include "org/allbinary/input/automation/module/ListModel.h"
#endif

        #endif
    
