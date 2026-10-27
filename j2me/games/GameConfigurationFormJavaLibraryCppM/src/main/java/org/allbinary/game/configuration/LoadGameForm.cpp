
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
        



        #ifndef ORG_ALLBINARY_GAME_CONFIGURATION_LOADGAMEFORM_CPP
        #define ORG_ALLBINARY_GAME_CONFIGURATION_LOADGAMEFORM_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/game/configuration/LoadGameForm.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
            #include "java/lang/Integer.h"
        
#include <javax/microedition/lcdui/Choice.h>

      
#include <javax/microedition/lcdui/ChoiceGroup.h>

      
#include <javax/microedition/lcdui/CommandListener.h>

      
#include <javax/microedition/lcdui/Item.h>

      
#include <javax/microedition/lcdui/NullImage.h>

      
#include <javax/microedition/lcdui/StringItem.h>

      
#include <org/allbinary/game/commands/GameCommandsFactory.h>

      
#include <org/allbinary/game/configuration/persistance/GamePersistanceSingleton.h>

      
#include <org/allbinary/graphics/color/BasicColor.h>

      
#include <org/allbinary/graphics/displayable/screen/CommandForm.h>

      
#include <org/allbinary/logic/MEUtil.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/logic/string/StringUtil.h>

      
#include <org/allbinary/util/BasicArrayList.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        

LoadGameForm::LoadGameForm(CommandListener* commandListener, std::string title, BasicColor* backgrounBasicColor, BasicColor* foregroundBasicColor) : CommandForm(commandListener, title, backgrounBasicColor, foregroundBasicColor), meUtil(MEUtil::getInstance()){

                        //super/this constructor call is in the constructor initializer list.
                    

                            //For kotlin this is before the body of the constructor.
                    
this->logUtil->putF(this->commonStrings->START, this, this->commonStrings->CONSTRUCTOR);
    
this->update();
    
this->initCommands(commandListener);
    
}


    auto LoadGameForm::initCommands(CommandListener* cmdListener) -> void{

    GameCommandsFactory* gameCommandsFactory = GameCommandsFactory::getInstance();;
    
this->removeAllCommands();
    
this->addCommand(gameCommandsFactory->LOAD_FILE);
    
this->addCommand(gameCommandsFactory->DELETE_FILE);
    
this->addCommand(gameCommandsFactory->CLOSE_AND_SHOW_GAME_CANVAS);
    
this->setCommandListener(cmdListener);
    
}


                //@Throws(Exception.constructor)
            
    auto LoadGameForm::update() -> void{

    BasicArrayList* list = GamePersistanceSingleton::getInstance()->getIds();;
    
this->deleteAll();
    

                        if(list->size() > 0)
                        
                                    {
                                    this->add(list, "Select A Saved Game", Choice::EXCLUSIVE);
    
this->areChoices= true;
    

                                    }
                                
                        else {
                            this->meUtil->appendItem(this, new StringItem("No Saved Games", StringUtil::getInstance()->EMPTY_STRING, Item::PLAIN));
    
this->areChoices= false;
    

                        }
                            
CommandForm::update();
    
}


    auto LoadGameForm::add(BasicArrayList* list, std::string name, int32_t option) -> void{

    ChoiceGroup* choiceGroup = this->getChoiceGroup(list, name, option);;
    

                        if(list->size() > 0)
                        
                                    {
                                    choiceGroup->setSelectedIndex(0, true);
    

                                    }
                                
this->meUtil->appendItem(this, choiceGroup);
    
}


    auto LoadGameForm::getChoiceGroup(BasicArrayList* list, std::string name, int32_t option) -> ChoiceGroup*{

    std::string METHOD_NAME = "getChoiceGroup";;
    

    std::string ADDING_CHOICE = "Adding Choice: ";;
    

    ChoiceGroup* choiceGroup = new ChoiceGroup(name, option, StringUtil::getInstance()->getArrayInstance(), NullImage::NULL_IMAGE_ARRAY);;
    

    int32_t size = list->size();;
    




                        for (
    int32_t index = 0;index < size; index++)
        {

    Object* anyType = list->objectArray[index];;
    
this->logUtil->putF((new StringMaker())->append(ADDING_CHOICE)->append(anyType->toString())->toString(), this, METHOD_NAME);
    
choiceGroup->append(anyType->toString(), NullImage::NULL_IMAGE);
    
}




                        //if statement needs to be on the same line and ternary does not work the same way.
                        return choiceGroup;
    
}


    auto LoadGameForm::getSelectedId() -> int32_t{

                        if(this->areChoices)
                        
                                    {
                                    
    ChoiceGroup* choiceGroup = dynamic_cast<ChoiceGroup*>(this->get(0));;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return choiceGroup->getSelectedIndex();;
    

                                    }
                                
                        else {
                            


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return  -1;
    

                        }
                            
}


    auto LoadGameForm::getSelectedText() -> int32_t{

                        if(this->areChoices)
                        
                                    {
                                    
    ChoiceGroup* choiceGroup = dynamic_cast<ChoiceGroup*>(this->get(0));;
    

    int32_t value = Integer.valueOf(choiceGroup->getString(choiceGroup->getSelectedIndex()))->intValue();;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return value;
    

                                    }
                                
                        else {
                            


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return  -1;
    

                        }
                            
}




        #endif //ORG_ALLBINARY_GAME_CONFIGURATION_LOADGAMEFORM_CPP
