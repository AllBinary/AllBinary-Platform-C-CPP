
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
        



            #include "../../../../../java/lang/Exception.h"
        
#include <jsinterop/annotations/JsType.h>

      
#include <java/io/ByteArrayInputStream.h>

      
#include <java/io/ByteArrayOutputStream.h>

      
#include <java/io/DataInputStream.h>

      
#include <java/io/DataOutputStream.h>

      
#include <java/util/Hashtable.h>

      
#include <javax/microedition/rms/RecordEnumeration.h>

      
#include <javax/microedition/rms/RecordStore.h>

      
#include <org/allbinary/TsUtil.h>

      
#include <org/allbinary/logic/communication/log/PreLogUtil.h>

      
#include <org/allbinary/logic/math/SmallIntegerSingletonFactory.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/logic/string/StringUtil.h>

      
#include <org/allbinary/logic/system/security/licensing/AbeClientInformationInterface.h>

      
#include <org/allbinary/string/CommonSeps.h>

      
#include <org/allbinary/util/HashtableUtil.h>

      
#include <jsinterop/annotations/JsMethod.h>

      
#include <jsinterop/annotations/JsConstructor.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "BasicPersitance.h"
#include "NullRecordStore.h"
#include "NullRecordFilter.h"
#include "NullRecordComparator.h"

class KeyValuePersistance: public BasicPersitance {
        

    private: const tsUtil: TsUtil = TsUtil.getInstance()!;

protected constructor (string recordId){
            super(recordId);
                    

                            //For kotlin this is before the body of the constructor.
                    
}


                //@Throws(Exception.constructor)
            
    public loadAll(AbeClientInformationInterface abeClientInformation){
this.loadAllSize(abeClientInformation, 1);
    
}


                //@Throws(Exception.constructor)
            
    public loadAllSize(AbeClientInformationInterface abeClientInformation, int32_t size){

    recordStore: RecordStore = NullRecordStore.NULL_RECORD_STORE;;
    

        try {
            recordStore= RecordStore.openRecordStore(this.getRecordId(abeClientInformation), true);
    

    recordEnum: RecordEnumeration = recordStore!.enumerateRecords(NullRecordFilter.NULL_RECORD_FILTER, NullRecordComparator.NULL_RECORD_COMPARATOR, true)!;;
    

    hashtable: Hashtable<string, string>;;
    

    name: string;;
    

    value: string;;
    

    smallIntegerSingletonFactory: SmallIntegerSingletonFactory = SmallIntegerSingletonFactory.getInstance()!;;
    

    stringBuffer: StringMaker = new StringMaker();;
    

    recordAsBytes: std::vector<int8_t>;;
    

    byteArrayInputStream: ByteArrayInputStream;;
    

    inputStream: DataInputStream;;
    

        while(recordEnum!.hasNextElement())
        {

    id: int32_t = recordEnum!.nextRecordId()!;;
    
stringBuffer!.delete(0, stringBuffer!.length());
    
this.logUtil!.putF(stringBuffer!.append(this.persistanceStrings!.LOADING_ID)!.appendint(id)!.toString(), this, this.persistanceStrings!.LOAD_ALL);
    
recordAsBytes= this.tsUtil!.getRecord(recordStore, id);
    

                        if(recordAsBytes != 
                                    null
                                )
                        
                                    {
                                    byteArrayInputStream= new ByteArrayInputStream(recordAsBytes);
    
inputStream= new DataInputStream(byteArrayInputStream);
    
hashtable= new Hashtable<string, string>();
    




                        for (
    index: int32_t = 0;index < size; index++)
        {
name= inputStream!.readUTF();
    
inputStream!.readUTF();
    
value= inputStream!.readUTF();
    
hashtable.put(name, value);
    
}

this.valueList!.add(hashtable);
    
this.idList!.add(smallIntegerSingletonFactory!.getAt(id));
    

                                    }
                                
}


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
                                    PreLogUtil.put(this.persistanceStrings!.CLOSING_RECORDSTORE, this, this.persistanceStrings!.LOAD_ALL);
    
recordStore!.closeRecordStore();
    

                                    }
                                

         }
        
}


                //@Throws(Exception.constructor)
            
    public save(AbeClientInformationInterface abeClientInformation, Hashtable<any, any> hashtable){

    recordStore: RecordStore = NullRecordStore.NULL_RECORD_STORE;;
    

        try {
            this.logUtil!.putF(new StringMaker().append(this.persistanceStrings!.SAVING)!.append(StringUtil.getInstance()!.toString(hashtable))!.toString(), this, this.commonStrings!.SAVE);
    
recordStore= RecordStore.openRecordStore(this.getRecordId(abeClientInformation), true);
    

    byteArrayOutputStream: ByteArrayOutputStream = new ByteArrayOutputStream();;
    

    outputStream: DataOutputStream = new DataOutputStream(byteArrayOutputStream);;
    

    value: string;;
    

    commonSeps: CommonSeps = CommonSeps.getInstance()!;;
    

    objectArray: std::vector<any> = HashtableUtil.getInstance()!.getKeysAsArray(hashtable)!;;
    

    anyType: any;;
    

    size: int32_t = objectArray!.length
                ;;
    




                        for (
    index: int32_t = 0;index < size; index++)
        {
outputStream!.writeUTF(objectArray[index]! as string);
    
outputStream!.writeUTF(commonSeps!.EQUALS);
    
anyType= objectArray[index]!;
    
value= hashtable.get(anyType) as string;
    
outputStream!.writeUTF(value);
    
}


    tsUtil: TsUtil = TsUtil.getInstance()!;;
    

    savedGameBytes: std::vector<int8_t> = tsUtil!.getByteArray(byteArrayOutputStream!.toString())!;;
    
recordStore!.addRecord(savedGameBytes, 0, savedGameBytes!.length);
    

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
                                    PreLogUtil.put(this.persistanceStrings!.CLOSING_RECORDSTORE, this, this.commonStrings!.SAVE);
    
recordStore!.closeRecordStore();
    

                                    }
                                

         }
        
}


    public Hashtable<any, any> get(int32_t index){

    hashtable: Hashtable<any, any> = this.valueList!.objectArray[index]! as Hashtable<any, any>;;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return hashtable;
    
}


};

            

