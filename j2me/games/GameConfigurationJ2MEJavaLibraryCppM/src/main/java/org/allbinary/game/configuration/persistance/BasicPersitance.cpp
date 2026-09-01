
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
        



            #include "../../../../../java/lang/Object.h"
        
            #include "../../../../../java/lang/Exception.h"
        
            #include "../../../../../java/lang/Integer.h"
        
#include <jsinterop/annotations/JsType.h>

      
#include <javax/microedition/rms/RecordStore.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/communication/log/PreLogUtil.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/logic/system/security/licensing/AbeClientInformationInterface.h>

      
#include <org/allbinary/persistance/PlatformRecordIdUtil.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
#include <org/allbinary/util/BasicArrayList.h>

      
#include <org/allbinary/util/BasicArrayListD.h>

      
#include <jsinterop/annotations/JsMethod.h>

      
#include <jsinterop/annotations/JsConstructor.h>

      
#include <jsinterop/annotations/JsProperty.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "PersistanceStrings.h"
#include "NullRecordStore.h"

class BasicPersitance
            : public Object
         {

    protected: const LogUtil logUtil = LogUtil::getInstance();

    protected: const CommonStrings commonStrings = CommonStrings::getInstance();

    protected: const PersistanceStrings persistanceStrings = PersistanceStrings::getInstance();

    private: const PlatformRecordIdUtil platformRecordIdUtil = PlatformRecordIdUtil::getInstance();

    private: std::string recordId;

    protected: const BasicArrayList valueList = BasicArrayListD();

    protected: const BasicArrayList idList = BasicArrayListD();

protected: BasicPersitance(std::string recordId){
this->recordId= recordId;
    
}


                //@Throws(Exception.constructor)
            
    public: void deleteRecoreStore(AbeClientInformationInterface abeClientInformation){
RecordStore::deleteRecordStore(this->getRecordId(abeClientInformation));
    
}


                //@Throws(Exception.constructor)
            
    public: void deleteAll(AbeClientInformationInterface abeClientInformation){

    int32_t size = this->idList.size();;
    




                        for (
    int32_t index = 0;index < size; index++)
        {

    Integer integer = this->idList.objectArray[index]! as Integer;;
    
this->delete(abeClientInformation, integer.intValue());
    
}

this->clear();
    
}


                //@Throws(Exception.constructor)
            
    public: void delete_(AbeClientInformationInterface abeClientInformation, int32_t deleteId){

    RecordStore recordStore = NullRecordStore::NULL_RECORD_STORE;;
    

        try {
            this->logUtil.putF(StringMaker().append(this->persistanceStrings.DELETING_WITH_ID).appendint(deleteId).toString(), this, this->commonStrings.delete_);
    
recordStore= RecordStore::openRecordStore(this->getRecordId(abeClientInformation), true);
    
recordStore.deleteRecord(deleteId);
    

                //: 
} catch(e) 
            {



                            throw e;
                    
}

         finally {
            
                        if(recordStore != 
                                    nullptr
                                )
                        
                                    {
                                    PreLogUtil::put(this->persistanceStrings.CLOSING_RECORDSTORE, this, this->commonStrings.delete_);
    
recordStore.closeRecordStore();
    

                                    }
                                

         }
        
}


    public: std::string getRecordId(AbeClientInformationInterface abeClientInformation){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->platformRecordIdUtil.getRecordId(abeClientInformation, this->recordId);;
    
}


    public: BasicArrayList getList(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->valueList;
    
}


    public: BasicArrayList getIds(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->idList;
    
}


    public: void clear(){
this->valueList.clear();
    
this->idList.clear();
    
}


};

            

