
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

class CurrentDisplayableFactory
            : public Object
         {

    private: static CurrentDisplayableFactory* instance() { static std::unique_ptr<CurrentDisplayableFactory> value(new CurrentDisplayableFactory()); return value.get(); }

    public: static CurrentDisplayableFactory* getInstance(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return CurrentDisplayableFactory::instance();
    
}


    private: CommonStrings* commonStrings = CommonStrings::getInstance();

    private: CanvasStrings* canvasStrings = CanvasStrings::getInstance();

    private: StringUtil* stringUtil = StringUtil::getInstance();

    private: const std::string SET_DISPLAYABLE = "setDisplayable";

    private: const std::string SET_RUNNABLE = "setRunnable";

    private: const std::string CLEAR_RUNNABLE = "clearRunnable";

    private: const std::string SET_USED_RUNNABLE = "setUsedRunnable";

    private: const std::string RUNNABLE = "Runnable: ";

    private: const std::string RUNNABLE_WAS_ALREADY_IN_USE = "Runnable was already in use: ";

    public: BasicArrayList* DEFAULT_CHILD_NAME_LIST = new BasicArrayListD();

    private: Displayable* displayable = NullDisplayable::getInstance();

    private: Displayable* openGlReadydisplayable = NullDisplayable::getInstance();

    private: GameRunnable* runnable = NullWaitGameRunnable::getInstance();

    private: GameRunnable* usedRunnable = NullWaitGameRunnable::getInstance();

private: CurrentDisplayableFactory(){
this->DEFAULT_CHILD_NAME_LIST->add(this->canvasStrings->ABOUT);
    
this->DEFAULT_CHILD_NAME_LIST->add(this->canvasStrings->OPTIONS);
    
this->DEFAULT_CHILD_NAME_LIST->add(GameInputMappingCanvas::NAME);
    
this->DEFAULT_CHILD_NAME_LIST->add(GameInputMappingInstructionsCanvas::NAME);
    
this->DEFAULT_CHILD_NAME_LIST->add(HighScoresCanvas::NAME);
    
}


    public: void setMyCanvas(MyCanvas* displayable){

                        if(
                                        (dynamic_cast<const MyCanvas*>(this->displayable) != nullptr)
                                    )
                        
                                    {
                                    
                        if(displayable->hasChild(dynamic_cast<MyCanvas*>(this->displayable)))
                        
                                    {
                                    PreLogUtil::put((new StringMaker())->append("Child Displayable is already set for: ")->append(this->stringUtil->toString(displayable))->toString(), this, this->SET_DISPLAYABLE);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return ;
    

                                    }
                                

                                    }
                                
this->setDisplayable(displayable);
    
}


    public: void setDisplayable(Displayable* displayable){
this->displayable= displayable;
    
this->setOpenGlReadydisplayable(displayable);
    
}


    public: void setOpenGlReadydisplayable(Displayable* openGlReadydisplayable){
this->openGlReadydisplayable= openGlReadydisplayable;
    
this->update();
    
}


    public: Displayable* getOpenGlReadydisplayable(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->openGlReadydisplayable;
    
}


    public: void setRunnable(GameRunnable* runnable){
PreLogUtil::put((new StringMaker())->append(this->RUNNABLE)->append(this->stringUtil->toString(runnable))->toString(), this, this->SET_RUNNABLE);
    
this->runnable= runnable;
    

                        if(this->usedRunnable != this->runnable)
                        
                                    {
                                    this->update();
    

                                    }
                                
                        else {
                            PreLogUtil::put((new StringMaker())->append(this->RUNNABLE_WAS_ALREADY_IN_USE)->append(this->stringUtil->toString(runnable))->toString(), this, this->SET_RUNNABLE);
    

                        }
                            
}


    public: void clearRunnable(){
PreLogUtil::put((new StringMaker())->append(this->RUNNABLE)->append(this->stringUtil->toString(NullRunnable::getInstance()))->toString(), this, this->CLEAR_RUNNABLE);
    
this->setUsedRunnable(NullWaitGameRunnable::getInstance());
    
}


    private: void update(){

        
        //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.
        //synchronized(this) 

        //mutex.withLock
        

    CommonSeps* commonSeps = CommonSeps::getInstance();;
    

    Features* features = Features::getInstance();;
    

    StringMaker* stringMaker = new StringMaker();;
    
stringMaker->append(this->stringUtil->toString(this->openGlReadydisplayable));
    

                        if(SWTUtil::isSWT && !features->isDefault(OpenGLFeatureFactory::getInstance()->OPENGL))
                        
                                    {
                                    PreLogUtil::put(stringMaker->append(commonSeps->SPACE)->append(SWTUtil::SWT)->append(commonSeps->SPACE)->append(this->RUNNABLE)->append(this->stringUtil->toString(NullRunnable::getInstance()))->toString(), this, this->commonStrings->UPDATE);
    
this->setUsedRunnable(NullWaitGameRunnable::getInstance());
    

                                    }
                                
                             else 
                        if(J2MEUtil::isHTML())
                        
                                    {
                                    PreLogUtil::put(stringMaker->append(commonSeps->SPACE)->append(GraphicsStrings::getInstance()->HTML)->append(commonSeps->SPACE)->append(this->RUNNABLE)->append(this->stringUtil->toString(this->runnable))->toString(), this, this->commonStrings->UPDATE);
    
this->setUsedRunnable(this->runnable);
    

                                    }
                                
                             else 
                        if(
                                    (dynamic_cast<const DemoCanvas*>(this->openGlReadydisplayable) != nullptr)
                                 || 
                                    (dynamic_cast<const AllBinaryGameCanvas*>(this->openGlReadydisplayable) != nullptr)
                                 || features->isDefault(OpenGLFeatureFactory::getInstance()->OPENGL))
                        
                                    {
                                    PreLogUtil::put(stringMaker->append(commonSeps->SPACE)->append(OpenGLFeatureFactory::getInstance()->OPENGL.toString())->append(commonSeps->SPACE)->append(this->RUNNABLE)->append(this->stringUtil->toString(this->runnable))->toString(), this, this->commonStrings->UPDATE);
    
this->setUsedRunnable(this->runnable);
    

                                    }
                                
                        else {
                            PreLogUtil::put(stringMaker->append(this->RUNNABLE)->append(this->stringUtil->toString(NullRunnable::getInstance()))->toString(), this, this->commonStrings->UPDATE);
    
this->setUsedRunnable(NullWaitGameRunnable::getInstance());
    

                        }
                            


}


    public: Displayable* getDisplayable(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->displayable;
    
}


    public: GameRunnable* getUsedRunnable(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->usedRunnable;
    
}


    public: void setUsedRunnable(GameRunnable* usedRunnable){
PreLogUtil::put((new StringMaker())->append(this->RUNNABLE)->append(this->stringUtil->toString(this->runnable))->append(CommonSeps::getInstance()->COLON_SEP)->append(this->stringUtil->toString(usedRunnable))->toString(), this, this->SET_USED_RUNNABLE);
    
this->usedRunnable= usedRunnable;
    
}


};

            

