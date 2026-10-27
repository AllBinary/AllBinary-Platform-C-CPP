
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
class PersistentInputMapping
            : public Object
         {

    public: static inline Object* instance = NullUtil::getInstance()->NULL_OBJECT;

    public: static PersistentInputMapping* getNullInstance(){

                        if(PersistentInputMapping::instance == NullUtil::getInstance()->NULL_OBJECT)
                        
                                    {
                                    PersistentInputMapping::instance= new PersistentInputMapping(GamePersistanceStrings::getInstance()->SAVED_INPUT_CONFIGURATION_RECORD_ID);
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return dynamic_cast<PersistentInputMapping*>(PersistentInputMapping::instance);
    
}


    protected: LogUtil* logUtil = LogUtil::getInstance();

    protected: CommonStrings* commonStrings = CommonStrings::getInstance();

    private: EnumerationUtil* enumerationUtil = EnumerationUtil::getInstance();

    private: InputToGameKeyMapping* inputMapping = new InputToGameKeyMapping();

    private: InputMappingEventListenerInterface* inputMappingEventListenerInterface = NullInputMappingEventListener::NULL_INPUT_MAPPING_EVENT_LISTENER;

    private: InputPersistance* inputPersistance;

protected: PersistentInputMapping(std::string name){
this->inputPersistance= new InputPersistance(name);
    
}


    public: int32_t getTotalMapped(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->getInputMapping()->getHashtable()->size();;
    
}


    protected: bool isDefaultNew(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return false;
    
}


    protected: InputToGameKeyMapping* getDefault(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return InputToGameKeyMapping::getNullInstance();;
    
}


                //@Throws(Exception.constructor)
            
    public: void setDefault(AbeClientInformationInterface* abeClientInformation){
this->getInputMapping()->removeAll();
    
this->getInputMapping()->addMapping(this->getDefault());
    
this->save(abeClientInformation);
    
}


                //@Throws(Exception.constructor)
            
    public: void update(AbeClientInformationInterface* abeClientInformation){
this->inputPersistance->deleteAll(abeClientInformation);
    
this->save(abeClientInformation);
    
}


    private: InputMappingEvent* inputMappingEvent = new InputMappingEvent(this);

                //@Throws(Exception.constructor)
            
    public: void save(AbeClientInformationInterface* abeClientInformation){
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
            
    public: void init(AbeClientInformationInterface* abeClientInformation){
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


    public: void setInputMappingEventListenerInterface(InputMappingEventListenerInterface* inputMappingEventListenerInterface){
this->inputMappingEventListenerInterface= inputMappingEventListenerInterface;
    
}


    private: InputMappingEventListenerInterface* getInputMappingEventListenerInterface(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->inputMappingEventListenerInterface;
    
}


    public: InputToGameKeyMapping* getInputMapping(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->inputMapping;
    
}


                //@Throws(Exception.constructor)
            
    public: bool isDelete(Input* input){



                            throw new Exception(this->commonStrings->NOT_IMPLEMENTED);
                    
}


                //@Throws(Exception.constructor)
            
    public: bool isSystemInput(Input* input){



                            throw new Exception(this->commonStrings->NOT_IMPLEMENTED);
                    
}


};

            

