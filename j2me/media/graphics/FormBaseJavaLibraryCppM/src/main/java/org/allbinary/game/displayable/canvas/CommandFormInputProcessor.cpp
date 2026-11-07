
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
        



        #ifndef ORG_ALLBINARY_GAME_DISPLAYABLE_CANVAS_COMMANDFORMINPUTPROCESSOR_CPP
        #define ORG_ALLBINARY_GAME_DISPLAYABLE_CANVAS_COMMANDFORMINPUTPROCESSOR_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/game/displayable/canvas/CommandFormInputProcessor.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Exception.h"
        
#include <javax/microedition/lcdui/Canvas.h>

      
#include <javax/microedition/lcdui/Command.h>

      
#include <org/allbinary/game/commands/GameCommandsFactory.h>

      
#include <org/allbinary/game/configuration/feature/Features.h>

      
#include <org/allbinary/game/configuration/feature/InputFeatureFactory.h>

      
#include <org/allbinary/game/input/event/GameKeyEvent.h>

      
#include <org/allbinary/game/input/event/GameKeyEventFactory.h>

      
#include <org/allbinary/game/layer/SWTUtil.h>

      
#include <org/allbinary/graphics/GPoint.h>

      
#include <org/allbinary/graphics/displayable/MyCanvas.h>

      
#include <org/allbinary/graphics/form/CommandCurrentSelectionForm.h>

      
#include <org/allbinary/graphics/form/ScrollSelectionForm.h>

      
#include <org/allbinary/graphics/opengles/OpenGLFeatureFactory.h>

      
#include <org/allbinary/input/motion/gesture/MotionGestureInput.h>

      
#include <org/allbinary/input/motion/gesture/TouchMotionGestureFactory.h>

      
#include <org/allbinary/input/motion/gesture/observer/MotionGestureEvent.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/media/audio/PrimaryPlayerQueueFactory.h>

      
#include <org/allbinary/media/audio/SelectSound.h>

      
#include <org/allbinary/thread/PrimaryThreadPool.h>

      
#include <org/allbinary/time/TimeDelayHelper.h>

      
#include <org/allbinary/util/BasicArrayList.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/game/displayable/canvas/BasicMenuInputProcessor.h"
#include "org/allbinary/game/displayable/canvas/CommandRunnable.h"
//In general allow scrolling of the menu and selection the center item

CommandFormInputProcessor::CommandFormInputProcessor(BasicArrayList* gameKeyEventList, int32_t playerInputId, MyCanvas* gameCanvas, ScrollSelectionForm* form) : BasicMenuInputProcessor(gameKeyEventList, playerInputId, gameCanvas), MOTION_GESTURE_SOURCE_ID(GameKeyEventFactory::getInstance()->MOTION_GESTURE_SOURCE_ID), clickTimeHelper(new TimeDelayHelper(this->CLICK_DELAY)), doubleClickTimeHelper(new TimeDelayHelper(this->DOUBLE_CLICK_DELAY)), isSingleKeyProcessing(InputFeatureFactory::getInstance()->isSingleKeyProcessing()){

                        //super/this constructor call is in the constructor initializer list.
                    

                            //For kotlin this is before the body of the constructor.
                    
this->form= form;
    
}


                //@Throws(Exception.constructor)
            
    auto CommandFormInputProcessor::processInput(int32_t key) -> int32_t{

                        if(key == Canvas::LEFT || key == Canvas::RIGHT || key == Canvas::UP || key == Canvas::DOWN)
                        
                                    {
                                    PrimaryPlayerQueueFactory::getInstance()->add(SelectSound::getInstance());
    
this->form->processInputKey(key);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return 1;
    

                                    }
                                
                             else 
                        if(key == Canvas::FIRE)
                        
                                    {
                                    PrimaryPlayerQueueFactory::getInstance()->add(SelectSound::getInstance());
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->processCommand();;
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return 0;
    
}


    auto CommandFormInputProcessor::processCommand() -> int32_t{

    CommandCurrentSelectionForm* commandCurrentSelectionForm = dynamic_cast<CommandCurrentSelectionForm*>(this->form);;
    

    Command* command = commandCurrentSelectionForm->getSelectedCommand();;
    
this->logUtil->putF(JavaString::valueOf(command), this, this->PROCESS_COMMAND);
    

    Features* features = Features::getInstance();;
    

    OpenGLFeatureFactory* openGLFeatureFactory = OpenGLFeatureFactory::getInstance();;
    

                        if(SWTUtil::isSWT && features->isFeature(openGLFeatureFactory->OPENGL) && command != GameCommandsFactory::getInstance()->EXIT_COMMAND)
                        
                                    {
                                    (new CommandRunnable(this, command))->run();
    

                                    }
                                
                        else {
                            PrimaryThreadPool::getInstance()->runTask(new CommandRunnable(this, command));
    

                        }
                            

                        if(command == GameCommandsFactory::getInstance()->QUIT_COMMAND)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return  -1;
    

                                    }
                                
                        else {
                            


                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return 1;
    

                        }
                            
}


                //@Throws(Exception.constructor)
            
    auto CommandFormInputProcessor::processInputList() -> int32_t{

        try {
            
    int32_t motionInputsIndex = this->processMotionInputs();;
    

    BasicArrayList* list = this->getGameKeyEventList();;
    

    int32_t size = list->size();;
    

    int32_t key = 0;;
    

    GameKeyEvent* gameKeyEvent;;
    




                        for (
    int32_t index = 0;index < size; index++)
        {
gameKeyEvent= dynamic_cast<GameKeyEvent*>(list->objectArray[index]);
    
key= gameKeyEvent->getKey();
    

                        if(gameKeyEvent->getSourceId() != this->MOTION_GESTURE_SOURCE_ID)
                        
                                    {
                                    
                        if(this->processInput(key) == 1)
                        
                                    {
                                    break;

                    

                                    }
                                

                                    }
                                
}

this->clear();
    

                        if(size > 0 || motionInputsIndex >= 0)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return 1;
    

                                    }
                                
                        else {
                            


                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return  -1;
    

                        }
                            

                //: 
} catch(Exception& e) 
            {
this->logUtil->put(this->commonStrings->EXCEPTION, this, this->gameInputStrings->PROCESS_INPUT, &e);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return  -1;
    
}

}


                //@Throws(Exception.constructor)
            
    auto CommandFormInputProcessor::processMotionInputs() -> int32_t{

    int32_t lastIndex = this->motionGestureEventList->size() -1;;
    

                        if(lastIndex >= 0)
                        
                                    {
                                    
    MotionGestureEvent* motionGestureEvent = dynamic_cast<MotionGestureEvent*>(this->motionGestureEventList->objectArray[lastIndex]);;
    
this->processMotionInput(motionGestureEvent);
    

                                    }
                                
this->motionGestureEventList->clear();
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return lastIndex;
    
}


                //@Throws(Exception.constructor)
            
    auto CommandFormInputProcessor::processMotionInput(MotionGestureEvent* motionGestureEvent) -> void{

    TouchMotionGestureFactory* touchMotionGestureFactory = TouchMotionGestureFactory::getInstance();;
    

    MotionGestureInput* motionGestureInput = motionGestureEvent->getMotionGesture();;
    

                        if(motionGestureInput == touchMotionGestureFactory->RELEASED)
                        
                                    {
                                    
    GPoint* point = motionGestureEvent->getCurrentPoint();;
    

                        if(this->form->isInForm(point))
                        
                                    {
                                    
    int32_t index = this->form->getSelectedIndexForPoint(point);;
    

                        if(index !=  -1)
                        
                                    {
                                    PrimaryPlayerQueueFactory::getInstance()->add(SelectSound::getInstance());
    

                        if(index == this->form->getSelectedIndex())
                        
                                    {
                                    
                        if(this->clickTimeHelper->isTimeTNT())
                        
                                    {
                                    this->processCommand();
    

                                    }
                                

                                    }
                                
                        else {
                            this->form->setSelectedIndex(index);
    

                        }
                            

                                    }
                                
                        else {
                            
                        }
                            

                                    }
                                

                        if(this->hasPressed)
                        
                                    {
                                    
                        if(!this->doubleClickTimeHelper->isTimeTNT())
                        
                                    {
                                    this->logUtil->putF("Double Press", this, this->gameInputStrings->PROCESS_MOTION_INPUT);
    
this->processCommand();
    

                                    }
                                
this->doubleClickTimeHelper->delay= this->DOUBLE_CLICK_DELAY;
    
this->doubleClickTimeHelper->setStartTimeTNT();
    

                                    }
                                
this->hasPressed= false;
    

                                    }
                                
                             else 
                        if(motionGestureInput == touchMotionGestureFactory->PRESSED)
                        
                                    {
                                    this->doubleClickTimeHelper->delay= 0;
    
this->hasPressed= true;
    

                                    }
                                
}


    auto CommandFormInputProcessor::toString() -> std::string{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return JavaString::valueOf((new StringMaker())->append(BasicMenuInputProcessor::toString())->append(this->NAME_LABEL)->append(JavaString::valueOf(this->form)));;
    
}




        #endif //ORG_ALLBINARY_GAME_DISPLAYABLE_CANVAS_COMMANDFORMINPUTPROCESSOR_CPP
