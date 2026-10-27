
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
        



        #ifndef ORG_ALLBINARY_INPUT_MEDIA_IMAGE_INPUTIMAGETYPE_CPP
        #define ORG_ALLBINARY_INPUT_MEDIA_IMAGE_INPUTIMAGETYPE_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/input/media/image/InputImageType.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
#include <java/util/HashMap.h>

      
#include <org/allbinary/util/BasicArrayList.h>

      
#include <org/allbinary/util/BasicArrayListD.h>

      
#include <org/allbinary/logic/StdUtil.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
HashMap<Object*, Object*>* InputImageType::hashMap = StdUtil::getInstance()->createHashMap();
BasicArrayList* InputImageType::TYPE_VECTOR = new BasicArrayListD();
auto InputImageType::CAPTURE_owner() -> InputImageType* { static std::unique_ptr<InputImageType> value(new InputImageType("Capture", 0)); return value.get(); }
InputImageType* InputImageType::CAPTURE = InputImageType::CAPTURE_owner();
auto InputImageType::COMPARISON_owner() -> InputImageType* { static std::unique_ptr<InputImageType> value(new InputImageType("Comparison", 1)); return value.get(); }
InputImageType* InputImageType::COMPARISON = InputImageType::COMPARISON_owner();
auto InputImageType::MOTION_owner() -> InputImageType* { static std::unique_ptr<InputImageType> value(new InputImageType("Motion", 2)); return value.get(); }
InputImageType* InputImageType::MOTION = InputImageType::MOTION_owner();

InputImageType::InputImageType(std::string name, int32_t index){
this->name= name;
    
this->index= index;
    
InputImageType::TYPE_VECTOR->add(this);
    
InputImageType::hashMap->put(this->getName(), this);
    
}


    auto InputImageType::toString() -> std::string{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return JavaString::valueOf("ImageType: ") +JavaString::valueOf(this->getName());
    
}


    auto InputImageType::getName() -> std::string{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->name;
    
}


    auto InputImageType::getInstance(std::string imageTypeString) -> InputImageType*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return dynamic_cast<InputImageType*>(InputImageType::hashMap->get(imageTypeString));
    
}


    auto InputImageType::getAllAsVector() -> BasicArrayList*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return InputImageType::TYPE_VECTOR;
    
}


    auto InputImageType::getIndex() -> int32_t{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->index;
    
}




        #endif //ORG_ALLBINARY_INPUT_MEDIA_IMAGE_INPUTIMAGETYPE_CPP
