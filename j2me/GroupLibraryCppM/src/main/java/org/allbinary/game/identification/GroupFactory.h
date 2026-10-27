
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

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
class LogUtil;
class StringMaker;
class StringUtil;
class BasicArrayList;
class BasicArrayListD;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        class Group;

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class GroupFactory
            : public virtual Object
         {

    private: static GroupFactory* instance_owner();
    private: static GroupFactory* instance;

    public: static GroupFactory* getInstance();


            
    public: GroupFactory();
        
    /*protected*/ public: LogUtil* logUtil;

    public: std::vector<Group*> NULL_GROUP_ARRAY;

    private: BasicArrayList* list;

    private: int32_t index = 0;

    public: Group* getNextGroup();

    public: Group* getNextGroupByName(std::string name);

    public: void init(int16_t groups, std::vector<std::string> nameArray);

};

            


        #endif //ORG_ALLBINARY_GAME_IDENTIFICATION_GROUPFACTORY_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_GAME_IDENTIFICATION_GROUPFACTORY_H_COMPLETE)
        #define ORG_ALLBINARY_GAME_IDENTIFICATION_GROUPFACTORY_H_COMPLETE
        #if __has_include(<org/allbinary/logic/communication/log/LogUtil.h>)
#include <org/allbinary/logic/communication/log/LogUtil.h>
#endif
#if __has_include(<org/allbinary/logic/string/StringMaker.h>)
#include <org/allbinary/logic/string/StringMaker.h>
#endif
#if __has_include(<org/allbinary/logic/string/StringUtil.h>)
#include <org/allbinary/logic/string/StringUtil.h>
#endif
#if __has_include(<org/allbinary/util/BasicArrayList.h>)
#include <org/allbinary/util/BasicArrayList.h>
#endif
#if __has_include(<org/allbinary/util/BasicArrayListD.h>)
#include <org/allbinary/util/BasicArrayListD.h>
#endif
#if __has_include("org/allbinary/game/identification/Group.h")
#include "org/allbinary/game/identification/Group.h"
#endif

        #endif
    
