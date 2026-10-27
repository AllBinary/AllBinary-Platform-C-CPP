
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
        



        #ifndef ORG_ALLBINARY_GAME_IDENTIFICATION_COMPOSITEGROUP_H
        #define ORG_ALLBINARY_GAME_IDENTIFICATION_COMPOSITEGROUP_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
class LogUtil;
class StringMaker;
class StringUtil;
class CommonStrings;
class BasicArrayList;
class BasicArrayListD;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        class Group;
class GroupCommonFactory;

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class CompositeGroup
            : public virtual Object
         {

    /*protected*/ public: LogUtil* logUtil;

    private: Group* groupInterface;

    private: BasicArrayList* list;

public: CompositeGroup(Group* groupInterface);

    public: void clear();

    public: void add(Group* groupInterface);

    public: bool isInGroup(Group* groupInterface);

    public: Group* getGroup();

};

            


        #endif //ORG_ALLBINARY_GAME_IDENTIFICATION_COMPOSITEGROUP_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_GAME_IDENTIFICATION_COMPOSITEGROUP_H_COMPLETE)
        #define ORG_ALLBINARY_GAME_IDENTIFICATION_COMPOSITEGROUP_H_COMPLETE
        #if __has_include(<org/allbinary/logic/communication/log/LogUtil.h>)
#include <org/allbinary/logic/communication/log/LogUtil.h>
#endif
#if __has_include(<org/allbinary/logic/string/StringMaker.h>)
#include <org/allbinary/logic/string/StringMaker.h>
#endif
#if __has_include(<org/allbinary/logic/string/StringUtil.h>)
#include <org/allbinary/logic/string/StringUtil.h>
#endif
#if __has_include(<org/allbinary/string/CommonStrings.h>)
#include <org/allbinary/string/CommonStrings.h>
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
#if __has_include("org/allbinary/game/identification/GroupCommonFactory.h")
#include "org/allbinary/game/identification/GroupCommonFactory.h"
#endif

        #endif
    
