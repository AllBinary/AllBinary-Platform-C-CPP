
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
        



        #ifndef ORG_ALLBINARY_GAME_INPUT_MAPPING_PERSISTENTINPUTMAPPING_CPP
        #define ORG_ALLBINARY_GAME_INPUT_MAPPING_PERSISTENTINPUTMAPPING_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/game/input/mapping/PersistentInputMapping.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
#include <java/util/Enumeration.h>

      
#include <org/allbinary/game/configuration/persistance/GamePersistanceStrings.h>

      
#include <org/allbinary/game/input/Input.h>

      
#include <org/allbinary/game/input/InputPersistance.h>

      
#include <org/allbinary/game/input/mapping/event/InputMappingEvent.h>

      
#include <org/allbinary/game/input/mapping/event/InputMappingEventListenerInterface.h>

      
#include <org/allbinary/game/input/mapping/event/NullInputMappingEventListener.h>

      
#include <org/allbinary/logic/NullUtil.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/communication/log/PreLogUtil.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/logic/system/security/licensing/AbeClientInformationInterface.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
#include <org/allbinary/util/BasicArrayList.h>

      
#include <org/allbinary/util/EnumerationUtil.h>

      
#include <org/allbinary/util/ABHashtable.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/game/input/mapping/InputToGameKeyMapping.h"
//GameInputNoPersistanceLibrary
Object* PersistentInputMapping::instance = NullUtil::getInstance()->NULL_OBJECT;

    auto PersistentInputMapping::getNullInstance() -> PersistentInputMapping*{

                        if(PersistentInputMapping::instance == NullUtil::getInstance()->NULL_OBJECT)
                        
                                    {
                                    PersistentInputMapping::instance= new PersistentInputMapping(GamePersistanceStrings::getInstance()->SAVED_INPUT_CONFIGURATION_RECORD_ID);
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return dynamic_cast<PersistentInputMapping*>(PersistentInputMapping::instance);
    
}


PersistentInputMapping::PersistentInputMapping(std::string name) : logUtil(LogUtil::getInstance()), commonStrings(CommonStrings::getInstance()), enumerationUtil(EnumerationUtil::getInstance()), inputMapping(new InputToGameKeyMapping()), inputMappingEventListenerInterface(NullInputMappingEventListener::NULL_INPUT_MAPPING_EVENT_LISTENER), inputMappingEvent(new InputMappingEvent(this)){
this->inputPersistance= new InputPersistance(name);
    
}


    auto PersistentInputMapping::getTotalMapped() -> int32_t{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->getInputMapping()->getHashtable()->size();;
    
}


    auto PersistentInputMapping::isDefaultNew() -> bool{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return false;
    
}


    auto PersistentInputMapping::getDefault() -> InputToGameKeyMapping*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return InputToGameKeyMapping::getNullInstance();;
    
}


                //@Throws(Exception.constructor)
            
    auto PersistentInputMapping::setDefault(AbeClientInformationInterface* abeClientInformation) -> void{
this->getInputMapping()->removeAll();
    
this->getInputMapping()->addMapping(this->getDefault());
    
this->save(abeClientInformation);
    
}


                //@Throws(Exception.constructor)
            
    auto PersistentInputMapping::update(AbeClientInformationInterface* abeClientInformation) -> void{
this->inputPersistance->deleteAll(abeClientInformation);
    
this->save(abeClientInformation);
    
}


                //@Throws(Exception.constructor)
            
    auto PersistentInputMapping::save(AbeClientInformationInterface* abeClientInformation) -> void{
this->inputPersistance->save(abeClientInformation, this->getInputMapping()->getHashtable());
    
this->inputMappingEvent->setInputToGameKeyMapping(this->getInputMapping());
    

                        if(this->getInputMappingEventListenerInterface() != 
                                    nullptr
                                )
                        
                                    {
                                    this->getInputMappingEventListenerInterface()->onInputMappingEvent(this->inputMappingEvent);
    

                                    }
                                
}


                //@Throws(Exception.constructor)
            
    auto PersistentInputMapping::init(AbeClientInformationInterface* abeClientInformation) -> void{
this->logUtil->putF(this->commonStrings->START, this, this->commonStrings->INIT);
    

        try {
            this->inputPersistance->loadAll(abeClientInformation);
    

                //: 
} catch(Exception& e) 
            {
PreLogUtil::putOE(this->commonStrings->EXCEPTION, this, this->commonStrings->INIT, &e);
    
this->inputPersistance->deleteRecoreStore(abeClientInformation);
    
this->setDefault(abeClientInformation);
    
this->inputPersistance->loadAll(abeClientInformation);
    
}


    BasicArrayList* list = this->inputPersistance->getList();;
    

    int32_t totalMappedTo = 0;;
    

    int32_t size = list->size();;
    

    ABHashtable<Object*, Object*>* hashtable;;
    

    Enumeration<Object*>* enumeration;;
    

    Input* mappedToInput;;
    

    Input* gameActionInput;;
    




                        for (
    int32_t index = 0;index < size; index++)
        {
hashtable= dynamic_cast<ABHashtable<Object*, Object*>*>(list->objectArray[index]);
    
enumeration= hashtable->keys();
    

        while(this->enumerationUtil->hasMoreElements(enumeration))
        {
mappedToInput= dynamic_cast<Input*>(this->enumerationUtil->nextElement(enumeration));
    
gameActionInput= dynamic_cast<Input*>(hashtable->get(mappedToInput));
    
totalMappedTo++;
    
this->getInputMapping()->add(gameActionInput, mappedToInput);
    
}

}


    StringMaker* stringBuffer = new StringMaker();;
    
stringBuffer->append("End - Total Loaded Keys Mapped: ");
    
stringBuffer->appendint(this->getTotalMapped());
    
stringBuffer->append(" to: ");
    
stringBuffer->appendint(totalMappedTo);
    
this->logUtil->putF(stringBuffer->toString(), this, this->commonStrings->INIT);
    
}


    auto PersistentInputMapping::setInputMappingEventListenerInterface(InputMappingEventListenerInterface* inputMappingEventListenerInterface) -> void{
this->inputMappingEventListenerInterface= inputMappingEventListenerInterface;
    
}


    auto PersistentInputMapping::getInputMappingEventListenerInterface() -> InputMappingEventListenerInterface*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->inputMappingEventListenerInterface;
    
}


    auto PersistentInputMapping::getInputMapping() -> InputToGameKeyMapping*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->inputMapping;
    
}


                //@Throws(Exception.constructor)
            
    auto PersistentInputMapping::isDelete(Input* input) -> bool{



                            throw Exception(this->commonStrings->NOT_IMPLEMENTED);
                    
}


                //@Throws(Exception.constructor)
            
    auto PersistentInputMapping::isSystemInput(Input* input) -> bool{



                            throw Exception(this->commonStrings->NOT_IMPLEMENTED);
                    
}




        #endif //ORG_ALLBINARY_GAME_INPUT_MAPPING_PERSISTENTINPUTMAPPING_CPP
