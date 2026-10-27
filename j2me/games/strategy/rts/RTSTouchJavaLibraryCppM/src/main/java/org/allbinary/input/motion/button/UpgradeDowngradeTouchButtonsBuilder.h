
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
        



        #ifndef ORG_ALLBINARY_INPUT_MOTION_BUTTON_UPGRADEDOWNGRADETOUCHBUTTONSBUILDER_H
        #define ORG_ALLBINARY_INPUT_MOTION_BUTTON_UPGRADEDOWNGRADETOUCHBUTTONSBUILDER_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Exception.h"
        
class TouchButtonDowngradeResource;
class TouchButtonUpgradeResource;
class BasicArrayList;
class BasicArrayListD;
class BasicArrayListUtil;
class LogUtil;
class CellPositionFactory;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/input/motion/button/BaseTouchInput.h"
class TouchButtonLocationHelper;
class BasicTouchButtonCellPositionFactory;
class CommonButtons;
class TouchButton;
class BasicTouchInputFactory;

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class UpgradeDowngradeTouchButtonsBuilder: public BaseTouchInput {


            
    public: UpgradeDowngradeTouchButtonsBuilder();
        
    /*protected*/ public: LogUtil* logUtil;

    public: BasicArrayList* getList();

};

            


        #endif //ORG_ALLBINARY_INPUT_MOTION_BUTTON_UPGRADEDOWNGRADETOUCHBUTTONSBUILDER_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_INPUT_MOTION_BUTTON_UPGRADEDOWNGRADETOUCHBUTTONSBUILDER_H_COMPLETE)
        #define ORG_ALLBINARY_INPUT_MOTION_BUTTON_UPGRADEDOWNGRADETOUCHBUTTONSBUILDER_H_COMPLETE
        #if __has_include(<org/allbinary/game/input/resource/TouchButtonDowngradeResource.h>)
#include <org/allbinary/game/input/resource/TouchButtonDowngradeResource.h>
#endif
#if __has_include(<org/allbinary/game/input/resource/TouchButtonUpgradeResource.h>)
#include <org/allbinary/game/input/resource/TouchButtonUpgradeResource.h>
#endif
#if __has_include(<org/allbinary/util/BasicArrayList.h>)
#include <org/allbinary/util/BasicArrayList.h>
#endif
#if __has_include(<org/allbinary/util/BasicArrayListD.h>)
#include <org/allbinary/util/BasicArrayListD.h>
#endif
#if __has_include(<org/allbinary/util/BasicArrayListUtil.h>)
#include <org/allbinary/util/BasicArrayListUtil.h>
#endif
#if __has_include(<org/allbinary/logic/communication/log/LogUtil.h>)
#include <org/allbinary/logic/communication/log/LogUtil.h>
#endif
#if __has_include(<org/allbinary/graphics/CellPositionFactory.h>)
#include <org/allbinary/graphics/CellPositionFactory.h>
#endif
#if __has_include("org/allbinary/input/motion/button/BaseTouchInput.h")
#include "org/allbinary/input/motion/button/BaseTouchInput.h"
#endif
#if __has_include("org/allbinary/input/motion/button/TouchButtonLocationHelper.h")
#include "org/allbinary/input/motion/button/TouchButtonLocationHelper.h"
#endif
#if __has_include("org/allbinary/input/motion/button/BasicTouchButtonCellPositionFactory.h")
#include "org/allbinary/input/motion/button/BasicTouchButtonCellPositionFactory.h"
#endif
#if __has_include("org/allbinary/input/motion/button/CommonButtons.h")
#include "org/allbinary/input/motion/button/CommonButtons.h"
#endif
#if __has_include("org/allbinary/input/motion/button/TouchButton.h")
#include "org/allbinary/input/motion/button/TouchButton.h"
#endif
#if __has_include("org/allbinary/input/motion/button/BasicTouchInputFactory.h")
#include "org/allbinary/input/motion/button/BasicTouchInputFactory.h"
#endif

        #endif
    
