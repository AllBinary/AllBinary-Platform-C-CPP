
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
        

    const logUtil: LogUtil = LogUtil.getInstance()!;

    const commonStrings: CommonStrings = CommonStrings.getInstance()!;

    const persistanceStrings: PersistanceStrings = PersistanceStrings.getInstance()!;

    private: const platformRecordIdUtil: PlatformRecordIdUtil = PlatformRecordIdUtil.getInstance()!;

    private: const recordId: string;

    const valueList: BasicArrayList = new BasicArrayListD();

    const idList: BasicArrayList = new BasicArrayListD();

protected constructor (string recordId){

            super();
        this.recordId= recordId;
    
}


                //@Throws(Exception.constructor)
            
    public deleteRecoreStore(AbeClientInformationInterface abeClientInformation){
RecordStore.deleteRecordStore(this.getRecordId(abeClientInformation));
    
}


                //@Throws(Exception.constructor)
            
    public deleteAll(AbeClientInformationInterface abeClientInformation){

    size: int32_t = this.idList!.size()!;;
    




                        for (
    index: int32_t = 0;index < size; index++)
        {

    integer: Integer = this.idList!.objectArray[index]! as Integer;;
    
this.delete(abeClientInformation, integer.intValue());
    
}

this.clear();
    
}


                //@Throws(Exception.constructor)
            
    public delete(AbeClientInformationInterface abeClientInformation, int32_t deleteId){

    recordStore: RecordStore = NullRecordStore.NULL_RECORD_STORE;;
    

        try {
            this.logUtil!.putF(new StringMaker().append(this.persistanceStrings!.DELETING_WITH_ID)!.appendint(deleteId)!.toString(), this, this.commonStrings!.delete);
    
recordStore= RecordStore.openRecordStore(this.getRecordId(abeClientInformation), true);
    
recordStore!.deleteRecord(deleteId);
    

                //: 
} catch(e) 
            {



                            throw e;
                    
}

         finally {
            
                        if(recordStore != 
                                    null
                                )
                        
                                    {
                                    PreLogUtil.put(this.persistanceStrings!.CLOSING_RECORDSTORE, this, this.commonStrings!.delete);
    
recordStore!.closeRecordStore();
    

                                    }
                                

         }
        
}


    public string getRecordId(AbeClientInformationInterface abeClientInformation){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.platformRecordIdUtil!.getRecordId(abeClientInformation, this.recordId);;
    
}


    public BasicArrayList getList(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.valueList;
    
}


    public BasicArrayList getIds(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.idList;
    
}


    public clear(){
this.valueList!.clear();
    
this.idList!.clear();
    
}


};

            

