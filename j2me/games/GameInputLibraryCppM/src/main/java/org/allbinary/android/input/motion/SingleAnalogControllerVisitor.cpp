
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
        



        #ifndef ORG_ALLBINARY_ANDROID_INPUT_MOTION_SINGLEANALOGCONTROLLERVISITOR_CPP
        #define ORG_ALLBINARY_ANDROID_INPUT_MOTION_SINGLEANALOGCONTROLLERVISITOR_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/android/input/motion/SingleAnalogControllerVisitor.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
#include <org/allbinary/game/input/analog/AnalogLocationInput.h>

      
#include <org/allbinary/game/input/analog/AnalogLocationInputFactory.h>

      
#include <org/allbinary/layer/AllBinaryLayerManager.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/android/input/motion/AnalogControllerVisitor.h"
#include "org/allbinary/android/input/motion/AnalogLocationInputProcessor.h"


SingleAnalogControllerVisitor::SingleAnalogControllerVisitor(int32_t playerInputId){
this->playerInputId= playerInputId;
    
}


    auto SingleAnalogControllerVisitor::process(AllBinaryLayerManager* allbinaryLayerManager, AnalogLocationInputProcessor* analogLocationInputProcessor) -> void{

    AnalogLocationInput* analogLocationInput = AnalogLocationInputFactory::getInstance()->getInstanceForPlayer(this->playerInputId);;
    
analogLocationInputProcessor->process(allbinaryLayerManager, analogLocationInput);
    
}




        #endif //ORG_ALLBINARY_ANDROID_INPUT_MOTION_SINGLEANALOGCONTROLLERVISITOR_CPP
