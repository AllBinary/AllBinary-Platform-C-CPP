
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
        



            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
#include <javax/microedition/lcdui/ChoiceGroup.h>

      
#include <javax/microedition/lcdui/Item.h>

      
#include <javax/microedition/lcdui/NullImage.h>

      
#include <org/allbinary/game/configuration/GameConfigurationGauge.h>

      
#include <org/allbinary/game/configuration/GameConfigurationUtil.h>

      
#include <org/allbinary/graphics/displayable/screen/CommandForm.h>

      
#include <org/allbinary/logic/MEUtil.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/logic/string/StringUtil.h>

      
#include <org/allbinary/util/ABHashtable.h>

      
#include <org/allbinary/util/BasicArrayList.h>

      
#include <org/allbinary/util/HashtableUtil.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/game/configuration/feature/Features.h"
#include "org/allbinary/game/configuration/feature/Feature.h"
#include "org/allbinary/game/configuration/feature/GameFeatureUtil.h"

class GameFeatureFormUtil
            : public Object
         {

    private: static GameFeatureFormUtil* instance() { static std::unique_ptr<GameFeatureFormUtil> value(new GameFeatureFormUtil()); return value.get(); }

    public: static GameFeatureFormUtil* getInstance(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return GameFeatureFormUtil::instance();
    
}


    protected: LogUtil* logUtil = LogUtil::getInstance();

    private: MEUtil* meUtil = MEUtil::getInstance();

    public: ChoiceGroup* getChoiceGroup(ABHashtable<Object*, Object*>* hashtable, std::string name, int32_t option){

    StringMaker* stringMaker = new StringMaker();;
    

    ChoiceGroup* choiceGroup = new ChoiceGroup(name, option, StringUtil::getInstance()->getArrayInstance(), NullImage::NULL_IMAGE_ARRAY);;
    

    BasicArrayList* list = dynamic_cast<BasicArrayList*>(hashtable->get(name));;
    

    Features* features = Features::getInstance();;
    

    std::string ADD_CHOICE = ": Adding Choice: ";;
    

    std::string GET_CHOICE_GROUP = "getChoiceGroup";;
    

    int32_t size = list->size();;
    




                        for (
    int32_t index = 0;index < size; index++)
        {

    Feature* gameFeature = dynamic_cast<Feature*>(list->objectArray[index]);;
    
stringMaker->delete(0, stringMaker->length());
    
this->logUtil->putF(stringMaker->append(name)->append(ADD_CHOICE)->append(gameFeature->toString())->toString(), this, GET_CHOICE_GROUP);
    
choiceGroup->append(gameFeature->toString(), NullImage::NULL_IMAGE);
    

                        if(features->isFeature(gameFeature))
                        
                                    {
                                    choiceGroup->setSelectedIndex(index, true);
    

                                    }
                                
}




                        //if statement needs to be on the same line and ternary does not work the same way.
                        return choiceGroup;
    
}


    public: void addChoiceGroup(CommandForm* form, ABHashtable<Object*, Object*>* hashtable, int32_t option){

    StringMaker* stringMaker = new StringMaker();;
    

    std::string ADDING_CHOICE_GROUP = "Adding Choice Group: ";;
    

    std::string ADD_CHOICE_GROUP = "addChoiceGroup";;
    

    int32_t size = hashtable->size();;
    

    std::vector<Object*> objectArray = HashtableUtil::getInstance()->getKeysAsArray(hashtable);;
    

    std::string name;;
    




                        for (
    int32_t index = 0;index < size; index++)
        {
name= objectArray[index];
    
stringMaker->delete(0, stringMaker->length());
    
this->logUtil->putF(stringMaker->append(ADDING_CHOICE_GROUP)->append(name)->toString(), this, ADD_CHOICE_GROUP);
    
this->meUtil->appendItem(form, this->getChoiceGroup(hashtable, name, option));
    
}

}


                //@Throws(Exception.constructor)
            
    public: void setDefault(CommandForm* form){

    int32_t size = form->size();;
    




                        for (
    int32_t index = 0;index < size; index++)
        {

    Item* item = form->get(index);;
    

                        if(
                                        (dynamic_cast<const GameConfigurationGauge*>(item) != nullptr)
                                    )
                        
                                    {
                                    GameConfigurationUtil::getInstance()->setDefault(dynamic_cast<GameConfigurationGauge*>(item));
    

                                    }
                                
                             else 
                        if(
                                        (dynamic_cast<const ChoiceGroup*>(item) != nullptr)
                                    )
                        
                                    {
                                    GameFeatureUtil::getInstance()->setDefault(dynamic_cast<ChoiceGroup*>(item));
    

                                    }
                                
}

}


};

            

