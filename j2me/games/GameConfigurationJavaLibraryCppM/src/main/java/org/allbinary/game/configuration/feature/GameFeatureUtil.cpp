
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
        
#include <java/util/Enumeration.h>

      
#include <javax/microedition/lcdui/ChoiceGroup.h>

      
#include <org/allbinary/TsUtil.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/string/CommonLabels.h>

      
#include <org/allbinary/util/ABHashtable.h>

      
#include <org/allbinary/util/BasicArrayList.h>

      
#include <org/allbinary/util/EnumerationUtil.h>

      
#include <org/allbinary/util/HashtableUtil.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/game/configuration/feature/Features.h"
#include "org/allbinary/game/configuration/feature/Feature.h"
#include "org/allbinary/game/configuration/feature/GameFeatureChoiceGroups.h"

class GameFeatureUtil
            : public Object
         {

    private: static GameFeatureUtil* instance() { static std::unique_ptr<GameFeatureUtil> value(new GameFeatureUtil()); return value.get(); }

    public: static GameFeatureUtil* getInstance(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return GameFeatureUtil::instance();
    
}


    protected: LogUtil* logUtil = LogUtil::getInstance();

    private: TsUtil* tsUtil = TsUtil::getInstance();

    private: EnumerationUtil* enumerationUtil = EnumerationUtil::getInstance();

    public: const std::string ON_GAME_FEATURE_CHANGE = "onGameFeatureChange";

    public: const std::string GAME_FEATURE_CHANGED = "Game Feature Changed: ";

                //@Throws(Exception.constructor)
            
    public: void setDefault(ChoiceGroup* choiceGroup){

    StringMaker* stringBuffer = new StringMaker();;
    

    std::string METHOD_NAME = "setDefault";;
    

    std::string SELECTED_ARRAY_RETURN = "selectedArray_return[";;
    

    std::string SELECTED_SEP = "] = ";;
    

    std::vector<bool> selectedArray_return = std::vector<bool>(choiceGroup->size());;
    

    int32_t total = choiceGroup->getSelectedFlags(selectedArray_return);;
    
stringBuffer->append("Multiple Total Choices: ");
    
stringBuffer->appendint(total);
    
this->logUtil->putF(stringBuffer->toString(), this, METHOD_NAME);
    

    Features* features = Features::getInstance();;
    




                        for (
    int32_t index = 0;index < selectedArray_return.size(); index++)
        {

    bool isSelected = selectedArray_return[index];;
    
stringBuffer->delete(0, stringBuffer->length());
    
stringBuffer->append(SELECTED_ARRAY_RETURN);
    
stringBuffer->appendint(index);
    
stringBuffer->append(SELECTED_SEP);
    
stringBuffer->appendboolean(isSelected);
    
this->logUtil->putF(stringBuffer->toString(), this, METHOD_NAME);
    

    std::string selectedChoiceLabel = choiceGroup->getString(index);;
    

    Feature* gameFeature = Feature::getInstance(selectedChoiceLabel);;
    

                        if(features->isDefault(gameFeature))
                        
                                    {
                                    features->add(gameFeature);
    
choiceGroup->setSelectedIndex(index, true);
    

                                    }
                                
                        else {
                            features->remove(gameFeature);
    
choiceGroup->setSelectedIndex(index, false);
    

                        }
                            
}

}


                //@Throws(Exception.constructor)
            
    public: void updateMultiple(ChoiceGroup* choiceGroup){

    StringMaker* stringBuffer = new StringMaker();;
    

    std::string METHOD_NAME = "updateMultiple";;
    

    std::string SELECTED_ARRAY_RETURN = "selectedArray_return[";;
    

    std::string SELECTED_SEP = "] = ";;
    

    std::vector<bool> selectedArray_return = std::vector<bool>(choiceGroup->size());;
    

    int32_t total = choiceGroup->getSelectedFlags(selectedArray_return);;
    
stringBuffer->append("Multiple Total Choices: ");
    
stringBuffer->appendint(total);
    
this->logUtil->putF(stringBuffer->toString(), this, METHOD_NAME);
    

    Features* features = Features::getInstance();;
    




                        for (
    int32_t index = 0;index < selectedArray_return.size(); index++)
        {

    bool isSelected = selectedArray_return[index];;
    
stringBuffer->delete(0, stringBuffer->length());
    
stringBuffer->append(SELECTED_ARRAY_RETURN);
    
stringBuffer->appendint(index);
    
stringBuffer->append(SELECTED_SEP);
    
stringBuffer->appendboolean(isSelected);
    
this->logUtil->putF(stringBuffer->toString(), this, METHOD_NAME);
    

    std::string selectedChoiceLabel = choiceGroup->getString(index);;
    

    Feature* gameFeature = Feature::getInstance(selectedChoiceLabel);;
    

                        if(!isSelected && features->isFeature(gameFeature))
                        
                                    {
                                    features->remove(gameFeature);
    

                                    }
                                
                             else 
                        if(isSelected && !features->isFeature(gameFeature))
                        
                                    {
                                    features->add(gameFeature);
    

                                    }
                                
}

}


                //@Throws(Exception.constructor)
            
    public: void updateExclusiveForChoiceGroup(ChoiceGroup* choiceGroup){

    StringMaker* stringBuffer = new StringMaker();;
    

    std::string METHOD_NAME = "updateExclusive";;
    

    std::string SELECTED_ARRAY_RETURN = "selectedArray_return[";;
    

    std::string SELECTED_SEP = "] = ";;
    

    std::vector<bool> selectedArray_return = std::vector<bool>(choiceGroup->size());;
    

    int32_t total = choiceGroup->getSelectedFlags(selectedArray_return);;
    
stringBuffer->append("Exclusive Total Choices: 1==");
    
stringBuffer->appendint(total);
    
this->logUtil->putF(stringBuffer->toString(), this, METHOD_NAME);
    




                        for (
    int32_t index = 0;index < selectedArray_return.size(); index++)
        {

    bool isSelected = selectedArray_return[index];;
    
stringBuffer->delete(0, stringBuffer->length());
    
stringBuffer->append(SELECTED_ARRAY_RETURN);
    
stringBuffer->appendint(index);
    
stringBuffer->append(SELECTED_SEP);
    
stringBuffer->appendboolean(isSelected);
    
this->logUtil->putF(stringBuffer->toString(), this, METHOD_NAME);
    

                        if(isSelected)
                        
                                    {
                                    
    std::string selectedChoiceLabel = choiceGroup->getString(index);;
    
this->updateExclusive(selectedChoiceLabel);
    

                                    }
                                
}

}


    public: bool isExclusive(std::string itemLabel){

    Enumeration<Object*>* enumeration = GameFeatureChoiceGroups::getExclusiveInstance()->get()->keys();;
    

    std::string name;;
    

        while(this->enumerationUtil->hasMoreElements(enumeration))
        {
name= this->enumerationUtil->nextElement(enumeration);
    

                        if(this->tsUtil->compareTo(itemLabel, name) == 0)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return true;
    

                                    }
                                
}




                        //if statement needs to be on the same line and ternary does not work the same way.
                        return false;
    
}


                //@Throws(Exception.constructor)
            
    private: void updateExclusive(std::string selectedChoiceLabel){
this->logUtil->putF((new StringMaker())->append(CommonLabels::getInstance()->ITEM_LABEL)->append(selectedChoiceLabel)->toString(), this, "updateExclusive");
    

    Feature* gameFeature = Feature::getInstance(selectedChoiceLabel);;
    

    ABHashtable<Object*, Object*>* hashtable = GameFeatureChoiceGroups::getExclusiveInstance()->get();;
    

    std::vector<Object*> objectArray = HashtableUtil::getInstance()->getKeysAsArray(hashtable);;
    

    BasicArrayList* basicArrayList;;
    

    Object* anyType;;
    

    int32_t size = objectArray.size();;
    




                        for (
    int32_t index = 0;index < size; index++)
        {
anyType= objectArray[index];
    
basicArrayList= dynamic_cast<BasicArrayList*>(hashtable->get(anyType));
    
this->updateExclusiveList(gameFeature, basicArrayList);
    
}

}


                //@Throws(Exception.constructor)
            
    public: void updateExclusiveList(Feature* gameFeature, BasicArrayList* list){

                        if(list->contains(gameFeature))
                        
                                    {
                                    
    Features* features = Features::getInstance();;
    

    int32_t addIndex = list->indexOf(gameFeature);;
    

    int32_t size = list->size();;
    




                        for (
    int32_t index = 0;index < size; index++)
        {

                        if(addIndex != index)
                        
                                    {
                                    features->remove(dynamic_cast<Feature*>(list->objectArray[index]));
    

                                    }
                                
                        else {
                            features->add(dynamic_cast<Feature*>(list->objectArray[index]));
    

                        }
                            
}


                                    }
                                
}


};

            

