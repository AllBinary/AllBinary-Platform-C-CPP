
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
        



        #ifndef ORG_ALLBINARY_LAYER_NULLLAYER_CPP
        #define ORG_ALLBINARY_LAYER_NULLLAYER_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/layer/NullLayer.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
#include <javax/microedition/lcdui/Graphics.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/layer/Layer.h"

auto NullLayer::instance_owner() -> NullLayer* { static std::unique_ptr<NullLayer> value(new NullLayer()); return value.get(); }
NullLayer* NullLayer::instance = NullLayer::instance_owner();

    auto NullLayer::getInstance() -> NullLayer*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return NullLayer::instance;
    
}


NullLayer::NullLayer() : Layer(0, 0){

                        //super/this constructor call is in the constructor initializer list.
                    

                            //For kotlin this is before the body of the constructor.
                    
}


    auto NullLayer::paint(Graphics* graphics) -> void{
}




        #endif //ORG_ALLBINARY_LAYER_NULLLAYER_CPP
