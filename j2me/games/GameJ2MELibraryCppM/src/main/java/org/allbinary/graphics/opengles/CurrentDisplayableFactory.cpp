
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
        



        #ifndef ORG_ALLBINARY_GRAPHICS_OPENGLES_CURRENTDISPLAYABLEFACTORY_CPP
        #define ORG_ALLBINARY_GRAPHICS_OPENGLES_CURRENTDISPLAYABLEFACTORY_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/graphics/opengles/CurrentDisplayableFactory.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
#include <javax/microedition/lcdui/Displayable.h>

      
#include <org/allbinary/J2MEUtil.h>

      
#include <org/allbinary/game/configuration/feature/Features.h>

      
#include <org/allbinary/game/displayable/canvas/AllBinaryGameCanvas.h>

      
#include <org/allbinary/game/displayable/canvas/DemoCanvas.h>

      
#include <org/allbinary/game/displayable/canvas/GameInputMappingCanvas.h>

      
#include <org/allbinary/game/displayable/canvas/GameInputMappingInstructionsCanvas.h>

      
#include <org/allbinary/game/displayable/canvas/GameRunnable.h>

      
#include <org/allbinary/game/displayable/canvas/NullDisplayable.h>

      
#include <org/allbinary/game/displayable/canvas/NullWaitGameRunnable.h>

      
#include <org/allbinary/game/layer/SWTUtil.h>

      
#include <org/allbinary/game/score/displayable/HighScoresCanvas.h>

      
#include <org/allbinary/graphics/GraphicsStrings.h>

      
#include <org/allbinary/graphics/displayable/CanvasStrings.h>

      
#include <org/allbinary/graphics/displayable/MyCanvas.h>

      
#include <org/allbinary/logic/communication/log/PreLogUtil.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/logic/string/StringUtil.h>

      
#include <org/allbinary/string/CommonSeps.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
#include <org/allbinary/thread/NullRunnable.h>

      
#include <org/allbinary/util/BasicArrayList.h>

      
#include <org/allbinary/util/BasicArrayListD.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/graphics/opengles/OpenGLFeatureFactory.h"

auto CurrentDisplayableFactory::instance_owner() -> CurrentDisplayableFactory* { static std::unique_ptr<CurrentDisplayableFactory> value(new CurrentDisplayableFactory()); return value.get(); }
CurrentDisplayableFactory* CurrentDisplayableFactory::instance = CurrentDisplayableFactory::instance_owner();

    auto CurrentDisplayableFactory::getInstance() -> CurrentDisplayableFactory*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return CurrentDisplayableFactory::instance;
    
}


CurrentDisplayableFactory::CurrentDisplayableFactory() : commonStrings(CommonStrings::getInstance()), canvasStrings(CanvasStrings::getInstance()), stringUtil(StringUtil::getInstance()), DEFAULT_CHILD_NAME_LIST(new BasicArrayListD()), displayable(NullDisplayable::getInstance()), openGlReadydisplayable(NullDisplayable::getInstance()), runnable(NullWaitGameRunnable::getInstance()), usedRunnable(NullWaitGameRunnable::getInstance()){
this->DEFAULT_CHILD_NAME_LIST->add(this->canvasStrings->ABOUT);
    
this->DEFAULT_CHILD_NAME_LIST->add(this->canvasStrings->OPTIONS);
    
this->DEFAULT_CHILD_NAME_LIST->add(GameInputMappingCanvas::NAME);
    
this->DEFAULT_CHILD_NAME_LIST->add(GameInputMappingInstructionsCanvas::NAME);
    
this->DEFAULT_CHILD_NAME_LIST->add(HighScoresCanvas::NAME);
    
}


    auto CurrentDisplayableFactory::setMyCanvas(MyCanvas* displayable) -> void{

                        if(
                                        (dynamic_cast<const MyCanvas*>(this->displayable) != nullptr)
                                    )
                        
                                    {
                                    
                        if(displayable->hasChild(dynamic_cast<MyCanvas*>(this->displayable)))
                        
                                    {
                                    PreLogUtil::put(JavaString::valueOf((new StringMaker())->append("Child Displayable is already set for: ")->append(this->stringUtil->toString(displayable))), this, this->SET_DISPLAYABLE);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return ;
    

                                    }
                                

                                    }
                                
this->setDisplayable(displayable);
    
}


    auto CurrentDisplayableFactory::setDisplayable(Displayable* displayable) -> void{
this->displayable= displayable;
    
this->setOpenGlReadydisplayable(displayable);
    
}


    auto CurrentDisplayableFactory::setOpenGlReadydisplayable(Displayable* openGlReadydisplayable) -> void{
this->openGlReadydisplayable= openGlReadydisplayable;
    
this->update();
    
}


    auto CurrentDisplayableFactory::getOpenGlReadydisplayable() -> Displayable*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->openGlReadydisplayable;
    
}


    auto CurrentDisplayableFactory::setRunnable(GameRunnable* runnable) -> void{
PreLogUtil::put(JavaString::valueOf((new StringMaker())->append(this->RUNNABLE)->append(this->stringUtil->toString(runnable))), this, this->SET_RUNNABLE);
    
this->runnable= runnable;
    

                        if(this->usedRunnable != this->runnable)
                        
                                    {
                                    this->update();
    

                                    }
                                
                        else {
                            PreLogUtil::put(JavaString::valueOf((new StringMaker())->append(this->RUNNABLE_WAS_ALREADY_IN_USE)->append(this->stringUtil->toString(runnable))), this, this->SET_RUNNABLE);
    

                        }
                            
}


    auto CurrentDisplayableFactory::clearRunnable() -> void{
PreLogUtil::put(JavaString::valueOf((new StringMaker())->append(this->RUNNABLE)->append(this->stringUtil->toString(NullRunnable::getInstance()))), this, this->CLEAR_RUNNABLE);
    
this->setUsedRunnable(NullWaitGameRunnable::getInstance());
    
}


    auto CurrentDisplayableFactory::update() -> void{

        
        //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.
        //synchronized(this) 

        //mutex.withLock
        

    CommonSeps* commonSeps = CommonSeps::getInstance();;
    

    Features* features = Features::getInstance();;
    

    StringMaker* stringMaker = new StringMaker();;
    
stringMaker->append(this->stringUtil->toString(this->openGlReadydisplayable));
    

                        if(SWTUtil::isSWT && !features->isDefault(OpenGLFeatureFactory::getInstance()->OPENGL))
                        
                                    {
                                    PreLogUtil::put(JavaString::valueOf(stringMaker->append(commonSeps->SPACE)->append(SWTUtil::SWT)->append(commonSeps->SPACE)->append(this->RUNNABLE)->append(this->stringUtil->toString(NullRunnable::getInstance()))), this, this->commonStrings->UPDATE);
    
this->setUsedRunnable(NullWaitGameRunnable::getInstance());
    

                                    }
                                
                             else 
                        if(J2MEUtil::isHTML())
                        
                                    {
                                    PreLogUtil::put(JavaString::valueOf(stringMaker->append(commonSeps->SPACE)->append(GraphicsStrings::getInstance()->HTML)->append(commonSeps->SPACE)->append(this->RUNNABLE)->append(this->stringUtil->toString(this->runnable))), this, this->commonStrings->UPDATE);
    
this->setUsedRunnable(this->runnable);
    

                                    }
                                
                             else 
                        if(
                                    (dynamic_cast<const DemoCanvas*>(this->openGlReadydisplayable) != nullptr)
                                 || 
                                    (dynamic_cast<const AllBinaryGameCanvas*>(this->openGlReadydisplayable) != nullptr)
                                 || features->isDefault(OpenGLFeatureFactory::getInstance()->OPENGL))
                        
                                    {
                                    PreLogUtil::put(JavaString::valueOf(stringMaker->append(commonSeps->SPACE)->append(JavaString::valueOf(OpenGLFeatureFactory::getInstance()->OPENGL))->append(commonSeps->SPACE)->append(this->RUNNABLE)->append(this->stringUtil->toString(this->runnable))), this, this->commonStrings->UPDATE);
    
this->setUsedRunnable(this->runnable);
    

                                    }
                                
                        else {
                            PreLogUtil::put(JavaString::valueOf(stringMaker->append(this->RUNNABLE)->append(this->stringUtil->toString(NullRunnable::getInstance()))), this, this->commonStrings->UPDATE);
    
this->setUsedRunnable(NullWaitGameRunnable::getInstance());
    

                        }
                            


}


    auto CurrentDisplayableFactory::getDisplayable() -> Displayable*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->displayable;
    
}


    auto CurrentDisplayableFactory::getUsedRunnable() -> GameRunnable*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->usedRunnable;
    
}


    auto CurrentDisplayableFactory::setUsedRunnable(GameRunnable* usedRunnable) -> void{
PreLogUtil::put(JavaString::valueOf((new StringMaker())->append(this->RUNNABLE)->append(this->stringUtil->toString(this->runnable))->append(CommonSeps::getInstance()->COLON_SEP)->append(this->stringUtil->toString(usedRunnable))), this, this->SET_USED_RUNNABLE);
    
this->usedRunnable= usedRunnable;
    
}




        #endif //ORG_ALLBINARY_GRAPHICS_OPENGLES_CURRENTDISPLAYABLEFACTORY_CPP
