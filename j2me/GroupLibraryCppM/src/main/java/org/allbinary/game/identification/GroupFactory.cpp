
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
        



        #ifndef ORG_ALLBINARY_GAME_IDENTIFICATION_GROUPFACTORY_CPP
        #define ORG_ALLBINARY_GAME_IDENTIFICATION_GROUPFACTORY_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/game/identification/GroupFactory.h"
        

            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/logic/string/StringUtil.h>

      
#include <org/allbinary/util/BasicArrayList.h>

      
#include <org/allbinary/util/BasicArrayListD.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/game/identification/Group.h"


GroupFactory::GroupFactory() : logUtil(LogUtil::getInstance()), NULL_GROUP_ARRAY({}), list(new BasicArrayListD()) {
        }
        auto GroupFactory::instance_owner() -> GroupFactory* { static std::unique_ptr<GroupFactory> value(new GroupFactory()); return value.get(); }
GroupFactory* GroupFactory::instance = GroupFactory::instance_owner();

    auto GroupFactory::getInstance() -> GroupFactory*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return GroupFactory::instance;
    
}


    auto GroupFactory::getNextGroup() -> Group*{

    Group* group = dynamic_cast<Group*>(this->list->objectArray[this->index]);;
    
this->index++;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return group;
    
}


    auto GroupFactory::getNextGroupByName(std::string name) -> Group*{

    Group* group = this->getNextGroup();;
    
group->setName(name);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return group;
    
}


    auto GroupFactory::init(int16_t groups, std::vector<std::string> nameArray) -> void{

    StringMaker* stringMaker = new StringMaker();;
    

    StringUtil* stringUtil = StringUtil::getInstance();;
    

    std::string TEAM = "Team ";;
    
this->list->clear();
    
this->index= 0;
    

    int32_t size = this->list->size();;
    

    std::string name;;
    

        while(size < groups)
        {
name= stringUtil->EMPTY_STRING;
    

                        if(size < nameArray.size())
                        
                                    {
                                    name= nameArray[size];
    

                                    }
                                
                        else {
                            stringMaker->delete_(0, stringMaker->length());
    
name= JavaString::valueOf(stringMaker->append(TEAM)->appendint(size));
    

                        }
                            
this->list->add(new Group(name, (size +3)));
    
size++;
    
}

}




        #endif //ORG_ALLBINARY_GAME_IDENTIFICATION_GROUPFACTORY_CPP
