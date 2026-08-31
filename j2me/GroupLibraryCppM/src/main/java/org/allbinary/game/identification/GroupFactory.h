
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

            #include "../../../../java/lang/Object.h"
        
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/logic/string/StringUtil.h>

      
#include <org/allbinary/util/BasicArrayList.h>

      
#include <org/allbinary/util/BasicArrayListD.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "Group.h"

class GroupFactory
            : public Object
         {
        

    private: static instance: GroupFactory = new GroupFactory();

    public static GroupFactory getInstance();

    const logUtil: LogUtil = LogUtil.getInstance()!;

    public const NULL_GROUP_ARRAY: std::vector<Group> = [];

    private: const list: BasicArrayList = new BasicArrayListD();

    private: index: int32_t = 0;

    public Group getNextGroup();

    public Group getNextGroupByName(string name);

    public init(int16_t groups, std::vector<string> nameArray);

};

            


        #endif //ORG_ALLBINARY_GAME_IDENTIFICATION_GROUPFACTORY_H
