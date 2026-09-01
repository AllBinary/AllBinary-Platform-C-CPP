
        /*
                *  
                *  AllBinary Open License Version 1 
                *  Copyright (c) 2025 AllBinary 
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
        



            #include "../../../../java/lang/Object.h"
        
            #include "../../../../java/lang/Integer.h"
        
#include <org/allbinary/logic/NullUtil.h>

      
#include <org/allbinary/logic/math/SmallIntegerSingletonFactory.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class GroupCommonFactory
            : public Object
         {

    private: static Object* instance = NullUtil::getInstance().NULL_OBJECT;

    public: static GroupCommonFactory getInstance(){

                        if(GroupCommonFactory::instance() == NullUtil::getInstance().NULL_OBJECT)
                        
                                    {
                                    GroupCommonFactory::instance= GroupCommonFactory();
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return GroupCommonFactory::instance() as GroupCommonFactory;
    
}


    public: const Integer ID = SmallIntegerSingletonFactory::getInstance().getAt(10);

    public: const std::string GROUP_NAME_LABEL = "Group Name: ";

    public: const std::string ID_LABEL = " Id: ";

    public: const std::string ADDING_LABEL = "Adding: ";

    public: const std::string TO_LABEL = " to: ";

};

            

