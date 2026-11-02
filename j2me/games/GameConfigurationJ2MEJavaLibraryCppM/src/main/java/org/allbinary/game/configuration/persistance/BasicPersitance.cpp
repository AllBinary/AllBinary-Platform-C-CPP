
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
        



        #ifndef ORG_ALLBINARY_GAME_CONFIGURATION_PERSISTANCE_BASICPERSITANCE_CPP
        #define ORG_ALLBINARY_GAME_CONFIGURATION_PERSISTANCE_BASICPERSITANCE_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/game/configuration/persistance/BasicPersitance.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
            #include "java/lang/Integer.h"
        
#include <javax/microedition/rms/RecordStore.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/communication/log/PreLogUtil.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/logic/system/security/licensing/AbeClientInformationInterface.h>

      
#include <org/allbinary/persistance/PlatformRecordIdUtil.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
#include <org/allbinary/util/BasicArrayList.h>

      
#include <org/allbinary/util/BasicArrayListD.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/game/configuration/persistance/PersistanceStrings.h"
#include "org/allbinary/game/configuration/persistance/NullRecordStore.h"


BasicPersitance::BasicPersitance(std::string recordId) : logUtil(LogUtil::getInstance()), commonStrings(CommonStrings::getInstance()), persistanceStrings(PersistanceStrings::getInstance()), platformRecordIdUtil(PlatformRecordIdUtil::getInstance()), valueList(new BasicArrayListD()), idList(new BasicArrayListD()){
this->recordId= recordId;
    
}


                //@Throws(Exception.constructor)
            
    auto BasicPersitance::deleteRecoreStore(AbeClientInformationInterface* abeClientInformation) -> void{
RecordStore::deleteRecordStore(this->getRecordId(abeClientInformation));
    
}


                //@Throws(Exception.constructor)
            
    auto BasicPersitance::deleteAll(AbeClientInformationInterface* abeClientInformation) -> void{

    int32_t size = this->idList->size();;
    




                        for (
    int32_t index = 0;index < size; index++)
        {

    int32_t integer = JavaBoxes::unbox<int32_t>(this->idList->objectArray[index]);;
    
this->delete_(abeClientInformation, integer);
    
}

this->clear();
    
}


                //@Throws(Exception.constructor)
            
    auto BasicPersitance::delete_(AbeClientInformationInterface* abeClientInformation, int32_t deleteId) -> void{

    RecordStore* recordStore = NullRecordStore::NULL_RECORD_STORE;;
    

        try {
            this->logUtil->putF((new StringMaker())->append(this->persistanceStrings->DELETING_WITH_ID)->appendint(deleteId)->toString(), this, this->commonStrings->delete_);
    
recordStore= RecordStore::openRecordStore(this->getRecordId(abeClientInformation), true);
    
recordStore->deleteRecord(deleteId);
    

                //: 
} catch(Exception& e) 
            {



                            throw e;
                    
}

         finally {
            
                        if(recordStore != 
                                    nullptr
                                )
                        
                                    {
                                    PreLogUtil::put(this->persistanceStrings->CLOSING_RECORDSTORE, this, this->commonStrings->delete_);
    
recordStore->closeRecordStore();
    

                                    }
                                

         }
        
}


    auto BasicPersitance::getRecordId(AbeClientInformationInterface* abeClientInformation) -> std::string{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->platformRecordIdUtil->getRecordId(abeClientInformation, this->recordId);;
    
}


    auto BasicPersitance::getList() -> BasicArrayList*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->valueList;
    
}


    auto BasicPersitance::getIds() -> BasicArrayList*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->idList;
    
}


    auto BasicPersitance::clear() -> void{
this->valueList->clear();
    
this->idList->clear();
    
}




        #endif //ORG_ALLBINARY_GAME_CONFIGURATION_PERSISTANCE_BASICPERSITANCE_CPP
