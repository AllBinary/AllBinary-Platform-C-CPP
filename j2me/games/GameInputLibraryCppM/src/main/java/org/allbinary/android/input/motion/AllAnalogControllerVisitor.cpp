
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
        



        #ifndef ORG_ALLBINARY_ANDROID_INPUT_MOTION_ALLANALOGCONTROLLERVISITOR_CPP
        #define ORG_ALLBINARY_ANDROID_INPUT_MOTION_ALLANALOGCONTROLLERVISITOR_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/android/input/motion/AllAnalogControllerVisitor.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
#include <org/allbinary/game/input/analog/AnalogLocationInput.h>

      
#include <org/allbinary/game/input/analog/AnalogLocationInputFactory.h>

      
#include <org/allbinary/layer/AllBinaryLayerManager.h>

      
#include <org/allbinary/util/BasicArrayList.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/android/input/motion/AnalogControllerVisitor.h"
#include "org/allbinary/android/input/motion/AnalogLocationInputProcessor.h"


AllAnalogControllerVisitor::AllAnalogControllerVisitor() {
        }
        
    auto AllAnalogControllerVisitor::process(AllBinaryLayerManager* allbinaryLayerManager, AnalogLocationInputProcessor* analogLocationInputProcessor) -> void{

    BasicArrayList* analogLocationInputList = AnalogLocationInputFactory::getInstance()->getList();;
    

    AnalogLocationInput* analogLocationInput;;
    




                        for (
    int32_t index = analogLocationInputList->size() -1;index >= 0; index--)
        {
analogLocationInput= dynamic_cast<AnalogLocationInput*>(analogLocationInputList->get(index));
    
analogLocationInputProcessor->process(allbinaryLayerManager, analogLocationInput);
    
}

}




        #endif //ORG_ALLBINARY_ANDROID_INPUT_MOTION_ALLANALOGCONTROLLERVISITOR_CPP
