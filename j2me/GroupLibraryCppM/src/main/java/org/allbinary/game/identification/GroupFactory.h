
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
        



        #ifndef ORG_ALLBINARY_GAME_IDENTIFICATION_GROUPFACTORY_H
        #define ORG_ALLBINARY_GAME_IDENTIFICATION_GROUPFACTORY_H

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

class GroupFactory
            : public Object
         {

    private: static GroupFactory* instance() { static std::unique_ptr<GroupFactory> value(new GroupFactory()); return value.get(); }

    public: static GroupFactory* getInstance();

    protected: LogUtil* logUtil = LogUtil::getInstance();

    public: const std::vector<Group*> NULL_GROUP_ARRAY = {};

    private: BasicArrayList* list = new BasicArrayListD();

    private: int32_t index = 0;

    public: Group* getNextGroup();

    public: Group* getNextGroupByName(std::string name);

    public: void init(int16_t groups, std::vector<std::string> nameArray);

};

            


        #endif //ORG_ALLBINARY_GAME_IDENTIFICATION_GROUPFACTORY_H
