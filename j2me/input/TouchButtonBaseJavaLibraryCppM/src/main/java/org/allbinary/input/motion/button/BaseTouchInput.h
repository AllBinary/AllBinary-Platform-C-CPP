
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
        



        #ifndef ORG_ALLBINARY_INPUT_MOTION_BUTTON_BASETOUCHINPUT_H
        #define ORG_ALLBINARY_INPUT_MOTION_BUTTON_BASETOUCHINPUT_H

            #include "java/lang/Object.h"
        
#include <org/allbinary/string/CommonStrings.h>

      
#include <org/allbinary/util/BasicArrayList.h>

      
#include <org/allbinary/util/BasicArrayListUtil.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class BaseTouchInput
            : public Object
         {

    protected: const CommonStrings commonStrings = CommonStrings::getInstance();

    private: const BasicArrayListUtil basicArrayListUtil = BasicArrayListUtil::getInstance();

public: BaseTouchInput();

    public: BasicArrayList getList();

    public: std::string toString();

};

            


        #endif //ORG_ALLBINARY_INPUT_MOTION_BUTTON_BASETOUCHINPUT_H
