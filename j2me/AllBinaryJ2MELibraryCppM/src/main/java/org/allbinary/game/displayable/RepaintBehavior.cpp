
        /*
                *  
                *  AllBinary Open License Version 1 
                *  Copyright (c) 2022 AllBinary 
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
        



        #ifndef ORG_ALLBINARY_GAME_DISPLAYABLE_REPAINTBEHAVIOR_CPP
        #define ORG_ALLBINARY_GAME_DISPLAYABLE_REPAINTBEHAVIOR_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/game/displayable/RepaintBehavior.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
            #include "java/lang/Thread.h"
        
#include <org/allbinary/thread/ARunnable.h>

      
#include <javax/microedition/lcdui/Canvas.h>

      
#include <org/allbinary/game/configuration/feature/Features.h>

      
#include <org/allbinary/graphics/displayable/DisplayInfoSingleton.h>

      
#include <org/allbinary/graphics/opengles/OpenGLFeatureFactory.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
#include <org/allbinary/thread/NullRunnable.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        

RepaintBehavior::RepaintBehavior() : logUtil(LogUtil::getInstance()) {
        }
        auto RepaintBehavior::instance_owner() -> RepaintBehavior* { static std::unique_ptr<RepaintBehavior> value(new RepaintBehavior()); return value.get(); }
RepaintBehavior* RepaintBehavior::instance = RepaintBehavior::instance_owner();

    auto RepaintBehavior::getInstance() -> RepaintBehavior*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return RepaintBehavior::instance;
    
}


    auto RepaintBehavior::repaint(Canvas* canvas) -> void{
}


    auto RepaintBehavior::onChangeRepaint(Canvas* canvas) -> void{

    Features* features = Features::getInstance();;
    

    OpenGLFeatureFactory* openGLFeatureFactory = OpenGLFeatureFactory::getInstance();;
    

                        if(features->isFeature(openGLFeatureFactory->OPENGL))
                        
                                    {
                                    DisplayInfoSingleton::getInstance()->process();
    

                                    }
                                
                        else {
                            
    Thread* thread = new Thread([&]() {
    static thread_local RepaintBehavior* anonymousOuter0 = nullptr;
    anonymousOuter0 = this;
    static thread_local Canvas* anonymous0_canvas{};
    anonymous0_canvas = canvas;
    class Anonymous0 : public ARunnable {
    public:
    using ARunnable::ARunnable;
    RepaintBehavior* outer = anonymousOuter0;
    Canvas* canvas = anonymous0_canvas;

    public: void run(){

        try {
            canvas->repaint();
    
DisplayInfoSingleton::getInstance()->process();
    

                //: 
} catch(Exception& e) 
            {

    CommonStrings* commonStrings = CommonStrings::getInstance();;
    

    LogUtil* logUtil = LogUtil::getInstance();;
    
logUtil->put(commonStrings->EXCEPTION, this, commonStrings->RUN, &e);
    
}

}

    };
    return new Anonymous0();
}(), this->NAME);;
    
thread->start();
    

                        }
                            
}




        #endif //ORG_ALLBINARY_GAME_DISPLAYABLE_REPAINTBEHAVIOR_CPP
