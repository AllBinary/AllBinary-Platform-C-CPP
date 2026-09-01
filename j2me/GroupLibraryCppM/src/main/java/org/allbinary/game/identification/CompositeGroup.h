
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

            #include "../../../../java/lang/Object.h"
        
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/logic/string/StringUtil.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
#include <org/allbinary/util/BasicArrayList.h>

      
#include <org/allbinary/util/BasicArrayListD.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "Group.h"
#include "GroupCommonFactory.h"

class CompositeGroup
            : public Object
         {

    protected: const LogUtil logUtil = LogUtil::getInstance();

    private: Group groupInterface;

    private: const BasicArrayList list = BasicArrayListD();

public: CompositeGroup(Group groupInterface);

    public: void clear();

    public: void add(Group groupInterface);

    public: bool isInGroup(Group groupInterface);

    public: Group getGroup();

};

            


        #endif //ORG_ALLBINARY_GAME_IDENTIFICATION_COMPOSITEGROUP_H
