
        /*
                *  
                *  AllBinary Open License Version 1 
                *  Copyright (c) 2007 AllBinary 
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
        



        #ifndef ORG_ALLBINARY_INPUT_MOTION_BUTTON_PREGAMESCROLLSELECTIONTOUCHBUTTONSBUILDER_H
        #define ORG_ALLBINARY_INPUT_MOTION_BUTTON_PREGAMESCROLLSELECTIONTOUCHBUTTONSBUILDER_H

            #include "../../../../../java/lang/Exception.h"
        
#include <org/allbinary/util/BasicArrayList.h>

      
#include <org/allbinary/util/BasicArrayListD.h>

      
#include <org/allbinary/util/BasicArrayListUtil.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "BaseTouchInput.h"
#include "TouchButtonLocationHelper.h"
#include "CommonButtons.h"
#include "BasicTouchButtonCellPositionFactory.h"
#include "TouchButton.h"
#include "BasicTouchInputFactory.h"
#include "TouchButtonStrafeLeftResource.h"
#include "TouchButtonStrafeRightResource.h"
#include "TouchButtonStartResource.h"

class PreGameScrollSelectionTouchButtonsBuilder: public BaseTouchInput {

    protected: const LogUtil logUtil = LogUtil::getInstance();

    public: BasicArrayList getList();

};

            


        #endif //ORG_ALLBINARY_INPUT_MOTION_BUTTON_PREGAMESCROLLSELECTIONTOUCHBUTTONSBUILDER_H
