
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
        



        #ifndef ORG_ALLBINARY_GAME_CONFIGURATION_GAMEDIFFICULTYOPTIONS_CPP
        #define ORG_ALLBINARY_GAME_CONFIGURATION_GAMEDIFFICULTYOPTIONS_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/game/configuration/GameDifficultyOptions.h"
        

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

      
#include <javax/microedition/lcdui/NullImage.h>

      
#include <org/allbinary/game/commands/GameCommandsFactory.h>

      
#include <org/allbinary/game/configuration/persistance/GameDifficultyFactory.h>

      
#include <org/allbinary/graphics/color/BasicColor.h>

      
#include <org/allbinary/graphics/displayable/screen/CommandForm.h>

      
#include <org/allbinary/logic/MEUtil.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/logic/string/StringUtil.h>

      
#include <org/allbinary/util/BasicArrayList.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        

GameDifficultyOptions::GameDifficultyOptions(CommandListener* commandListener, std::string title, BasicArrayList* list, BasicColor* backgrounBasicColor, BasicColor* foregroundBasicColor) : CommandForm(commandListener, title, backgrounBasicColor, foregroundBasicColor), meUtil(MEUtil::getInstance()){

                        //super/this constructor call is in the constructor initializer list.
                    

                            //For kotlin this is before the body of the constructor.
                    
this->logUtil->putF(this->commonStrings->START, this, this->commonStrings->CONSTRUCTOR);
    
this->list= list;
    
this->update();
    
this->initCommands(commandListener);
    

    GameDifficultyFactory* gameDifficultyFactory = GameDifficultyFactory::getInstance();;
    
this->setSelectedId(gameDifficultyFactory->getLevel());
    
}


    auto GameDifficultyOptions::open() -> void{
CommandForm::open();
    
}


    auto GameDifficultyOptions::close() -> void{
CommandForm::close();
    
this->save();
    
}


                //@Throws(Exception.constructor)
            
    auto GameDifficultyOptions::save() -> void{

    GameDifficultyFactory* gameDifficultyFactory = GameDifficultyFactory::getInstance();;
    
gameDifficultyFactory->setLevel(this->getSelectedId());
    
}


    auto GameDifficultyOptions::initCommands(CommandListener* cmdListener) -> void{

    GameCommandsFactory* gameCommandsFactory = GameCommandsFactory::getInstance();;
    
this->removeAllCommands();
    
this->addCommand(gameCommandsFactory->CLOSE_AND_SHOW_GAME_CANVAS);
    
this->setCommandListener(cmdListener);
    
}


                //@Throws(Exception.constructor)
            
    auto GameDifficultyOptions::update() -> void{
this->deleteAll();
    
this->add(this->list, "Difficulty", Choice::EXCLUSIVE);
    
CommandForm::update();
    
}


    auto GameDifficultyOptions::add(BasicArrayList* list, std::string name, int32_t option) -> void{

    ChoiceGroup* choiceGroup = this->getChoiceGroup(list, name, option);;
    

                        if(list->size() > 0)
                        
                                    {
                                    choiceGroup->setSelectedIndex(0, true);
    

                                    }
                                
this->meUtil->appendItem(this, choiceGroup);
    
}


    auto GameDifficultyOptions::getChoiceGroup(BasicArrayList* list, std::string name, int32_t option) -> ChoiceGroup*{

    std::string METHOD_NAME = "addChoiceGroup";;
    

    std::string NAME = "Adding Choice: ";;
    

    ChoiceGroup* choiceGroup = new ChoiceGroup(name, option, StringUtil::getInstance()->getArrayInstance(), NullImage::NULL_IMAGE_ARRAY);;
    

    int32_t size = list->size();;
    

    Object* anyType;;
    




                        for (
    int32_t index = 0;index < size; index++)
        {
anyType= list->objectArray[index];
    
this->logUtil->putF(JavaString::valueOf((new StringMaker())->append(NAME)->append(JavaString::valueOf(anyType))), this, METHOD_NAME);
    
choiceGroup->append(JavaString::valueOf(anyType), NullImage::NULL_IMAGE);
    
}




                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return choiceGroup;
    
}


    auto GameDifficultyOptions::setSelectedId(int32_t id) -> void{

    ChoiceGroup* choiceGroup = dynamic_cast<ChoiceGroup*>(this->get(0));;
    
choiceGroup->setSelectedIndex(id, true);
    
}


    auto GameDifficultyOptions::getSelectedId() -> int32_t{

    ChoiceGroup* choiceGroup = dynamic_cast<ChoiceGroup*>(this->get(0));;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return choiceGroup->getSelectedIndex();;
    
}


    auto GameDifficultyOptions::getSelectedText() -> int32_t{

    ChoiceGroup* choiceGroup = dynamic_cast<ChoiceGroup*>(this->get(0));;
    

    int32_t value = JavaBoxes::value<int32_t>(Integer.valueOf(choiceGroup->getString(choiceGroup->getSelectedIndex())));;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return value;
    
}




        #endif //ORG_ALLBINARY_GAME_CONFIGURATION_GAMEDIFFICULTYOPTIONS_CPP
