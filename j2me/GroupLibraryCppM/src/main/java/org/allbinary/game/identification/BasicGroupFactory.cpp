
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
        



            #include <vector>
        
            #include "../../../../java/lang/Object.h"
        
#include <jsinterop/annotations/JsType.h>

      
#include <org/allbinary/logic/NullUtil.h>

      
#include <jsinterop/annotations/JsMethod.h>

      
#include <jsinterop/annotations/JsProperty.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "Group.h"

class BasicGroupFactory
            : public Object
         {

    private: static Object* instance = NullUtil::getInstance().NULL_OBJECT;

    public: static BasicGroupFactory getInstance(){

                        if(BasicGroupFactory::instance() == NullUtil::getInstance().NULL_OBJECT)
                        
                                    {
                                    BasicGroupFactory::instance= BasicGroupFactory();
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return BasicGroupFactory::instance() as BasicGroupFactory;
    
}


    public: const std::string NAME = "GROUP_NAME";

    public: const std::string NO_SUCH_GROUP = "No Such Group: ";

    public: const Group GOOD = Group("Good Guys", 0);

    public: const Group ENEMY = Group("Bad Guys", 1);

    public: const Group ENEMY_ON_LEVEL = Group("Bad Guys on Level", 2);

    public: const Group NONE = Group("Not On A Team", 3);

    public: const std::vector<Group> GOOD_ARRAY = 
                                                        {
                                                            this->GOOD
                                                        };

    public: const std::vector<Group> ENEMY_ARRAY = 
                                                        {
                                                            this->ENEMY
                                                        };

    public: const std::vector<Group> ENEMY_ON_LEVEL_ARRAY = 
                                                        {
                                                            this->ENEMY,this->ENEMY_ON_LEVEL
                                                        };

    public: const std::vector<Group> NONE_ARRAY = 
                                                        {
                                                            this->NONE
                                                        };

};

            

