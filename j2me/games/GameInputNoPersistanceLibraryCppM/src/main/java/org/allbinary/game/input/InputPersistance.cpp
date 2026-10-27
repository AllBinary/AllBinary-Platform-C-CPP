
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
        



        #ifndef ORG_ALLBINARY_GAME_INPUT_INPUTPERSISTANCE_CPP
        #define ORG_ALLBINARY_GAME_INPUT_INPUTPERSISTANCE_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/game/input/InputPersistance.h"
        

            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
#include <javax/microedition/rms/RecordEnumeration.h>

      
#include <javax/microedition/rms/RecordStore.h>

      
#include <org/allbinary/game/configuration/persistance/BasicPersitance.h>

      
#include <org/allbinary/game/configuration/persistance/NullRecordComparator.h>

      
#include <org/allbinary/game/configuration/persistance/NullRecordFilter.h>

      
#include <org/allbinary/logic/communication/log/PreLogUtil.h>

      
#include <org/allbinary/logic/math/SmallIntegerSingletonFactory.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/logic/string/StringUtil.h>

      
#include <org/allbinary/logic/system/security/licensing/AbeClientInformationInterface.h>

      
#include <org/allbinary/util/BasicArrayList.h>

      
#include <org/allbinary/util/HashtableUtil.h>

      
#include <org/allbinary/logic/StdUtil.h>

      
#include <org/allbinary/util/ABHashtable.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/game/input/Input.h"
//GameInputNoPersistanceLibrary

InputPersistance::InputPersistance(std::string name) : BasicPersitance(name), hashtableUtil(HashtableUtil::getInstance()){

                        //super/this constructor call is in the constructor initializer list.
                    

                            //For kotlin this is before the body of the constructor.
                    
}


                //@Throws(Exception.constructor)
            
    auto InputPersistance::loadAll(AbeClientInformationInterface* abeClientInformation) -> void{

    RecordStore* recordStore = RecordStore::openRecordStore(this->getRecordId(abeClientInformation), true);;
    

    RecordEnumeration* recordEnum = recordStore->enumerateRecords(NullRecordFilter::NULL_RECORD_FILTER, NullRecordComparator::NULL_RECORD_COMPARATOR, true);;
    

    ABHashtable<Object*, Object*>* hashtable;;
    

    StringMaker* stringBuffer = new StringMaker();;
    

    SmallIntegerSingletonFactory* smallIntegerSingletonFactory = SmallIntegerSingletonFactory::getInstance();;
    

    int32_t id= 0;;
    

        while(recordEnum->hasNextElement())
        {
id= recordEnum->nextRecordId();
    
stringBuffer->delete_(0, stringBuffer->length());
    
this->logUtil->putF(stringBuffer->append(this->persistanceStrings->LOADING_ID)->appendint(id)->toString(), this, this->persistanceStrings->LOAD_ALL);
    
hashtable= StdUtil::getInstance()->createHashtable();
    
this->valueList->add(hashtable);
    
this->idList->add(smallIntegerSingletonFactory->getAt(id));
    
}

recordStore->closeRecordStore();
    
}


                //@Throws(Exception.constructor)
            
    auto InputPersistance::save(AbeClientInformationInterface* abeClientInformation, ABHashtable<Object*, Object*>* hashtable) -> void{
PreLogUtil::put((new StringMaker())->append(this->persistanceStrings->NOT_SAVING)->append(StringUtil::getInstance()->toString(hashtable))->toString(), this, this->commonStrings->SAVE);
    

    RecordStore* recordStore = RecordStore::openRecordStore(this->getRecordId(abeClientInformation), true);;
    

    Input* gameActionInput;;
    

    BasicArrayList* list;;
    

    Input* input;;
    

    std::vector<Object*> inputObjectArray = this->hashtableUtil->getKeysAsArray(hashtable);;
    

    int32_t size = inputObjectArray.size();;
    




                        for (
    int32_t index = 0;index < size; index++)
        {
gameActionInput= dynamic_cast<Input*>(inputObjectArray[index]);
    
list= dynamic_cast<BasicArrayList*>(hashtable->get(inputObjectArray[index]));
    




                        for (
    int32_t index2 = 0;index2 < list->size(); index2++)
        {
input= dynamic_cast<Input*>(list->get(index2));
    
}

}

recordStore->closeRecordStore();
    
}




        #endif //ORG_ALLBINARY_GAME_INPUT_INPUTPERSISTANCE_CPP
