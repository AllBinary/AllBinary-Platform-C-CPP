
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
        



            #include "../../../../java/lang/Exception.h"
        
            #include "../../../../java/lang/Integer.h"
        
#include <jsinterop/annotations/JsType.h>

      
#include <java/io/ByteArrayInputStream.h>

      
#include <java/io/ByteArrayOutputStream.h>

      
#include <java/io/DataInputStream.h>

      
#include <java/io/DataOutputStream.h>

      
#include <java/util/Hashtable.h>

      
#include <javax/microedition/rms/RecordEnumeration.h>

      
#include <javax/microedition/rms/RecordStore.h>

      
#include <org/allbinary/TsUtil.h>

      
#include <org/allbinary/game/configuration/persistance/BasicPersitance.h>

      
#include <org/allbinary/game/configuration/persistance/NullRecordComparator.h>

      
#include <org/allbinary/game/configuration/persistance/NullRecordFilter.h>

      
#include <org/allbinary/game/configuration/persistance/NullRecordStore.h>

      
#include <org/allbinary/logic/communication/log/PreLogUtil.h>

      
#include <org/allbinary/logic/math/SmallIntegerSingletonFactory.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/logic/string/StringUtil.h>

      
#include <org/allbinary/logic/system/security/licensing/AbeClientInformationInterface.h>

      
#include <org/allbinary/string/CommonSeps.h>

      
#include <org/allbinary/util/BasicArrayList.h>

      
#include <org/allbinary/util/HashtableUtil.h>

      
#include <jsinterop/annotations/JsMethod.h>

      
#include <jsinterop/annotations/JsConstructor.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "Input.h"
#include "GameKeyMappingFactory.h"
#include "InputFactory.h"
//GameInputPersistanceLibrary
class InputPersistance: public BasicPersitance {
        

    private: const tsUtil: TsUtil = TsUtil.getInstance()!;

    private: const hashtableUtil: HashtableUtil = HashtableUtil.getInstance()!;

public constructor (string name){
            super(name);
                    

                            //For kotlin this is before the body of the constructor.
                    
}


                //@Throws(Exception.constructor)
            
    public loadAll(AbeClientInformationInterface abeClientInformation){

    recordStore: RecordStore = NullRecordStore.NULL_RECORD_STORE;;
    

        try {
            recordStore= RecordStore.openRecordStore(this.getRecordId(abeClientInformation), true);
    

    recordEnum: RecordEnumeration = recordStore!.enumerateRecords(NullRecordFilter.NULL_RECORD_FILTER, NullRecordComparator.NULL_RECORD_COMPARATOR, true)!;;
    

    gameActionInputId: int64_t= 0;;
    

    inputId: int64_t= 0;;
    

    gameActionInput: Input;;
    

    input: Input;;
    

    hashtable: Hashtable<any, any>;;
    

    gameKeyFactory: GameKeyMappingFactory = GameKeyMappingFactory.getInstance()!;;
    

    stringBuffer: StringMaker = new StringMaker();;
    

    inputFactory: InputFactory = InputFactory.getInstance()!;;
    

    smallIntegerSingletonFactory: SmallIntegerSingletonFactory = SmallIntegerSingletonFactory.getInstance()!;;
    

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
    
hashtable= new Hashtable<any, any>();
    

    value: int32_t= 0;;
    

        while(inputStream!.available() > 0)
        {

    gameActionInputIdAsString: string = inputStream!.readUTF()!;;
    
value= Integer.parseInt(gameActionInputIdAsString);
    
gameActionInputId= value;
    
inputStream!.readUTF();
    
value= Integer.parseInt(inputStream!.readUTF());
    
inputId= value;
    
gameActionInput= gameKeyFactory!.getGameKey(static_cast<int32_t>(gameActionInputId));
    
input= inputFactory!.getInstanceById(static_cast<int32_t>(inputId));
    

                        if(input == inputFactory!.NO_INPUT || gameActionInput == 
                                    null
                                )
                        
                                    {
                                    stringBuffer!.delete(0, stringBuffer!.length());
    

                        if(input == inputFactory!.NO_INPUT)
                        
                                    {
                                    stringBuffer!.append(this.persistanceStrings!.ERROR_LOADING_ID);
    
stringBuffer!.appendlong(inputId);
    
stringBuffer!.append(this.persistanceStrings!.GAME_ACTION_INPUT);
    
stringBuffer!.appendlong(gameActionInputId);
    
PreLogUtil.put(stringBuffer!.toString(), this, this.persistanceStrings!.LOAD_ALL);
    

                                    }
                                

                        if(gameActionInput == 
                                    null
                                )
                        
                                    {
                                    stringBuffer!.delete(0, stringBuffer!.length());
    
stringBuffer!.append(this.persistanceStrings!.ERROR_LOADING);
    
stringBuffer!.appendlong(gameActionInputId);
    
stringBuffer!.append(this.persistanceStrings!.ID);
    
stringBuffer!.appendlong(inputId);
    
PreLogUtil.put(stringBuffer!.toString(), this, this.persistanceStrings!.LOAD_ALL);
    

                                    }
                                

                                    }
                                
                        else {
                            
                        }
                            
hashtable.put(input, gameActionInput);
    
}

this.valueList!.add(hashtable);
    
this.idList!.add(smallIntegerSingletonFactory!.getAt(id));
    

                                    }
                                
                        else {
                            
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
            
    stringBuffer: StringMaker = new StringMaker();;
    
PreLogUtil.put(stringBuffer!.append(this.persistanceStrings!.SAVING)!.append(StringUtil.getInstance()!.toString(hashtable))!.toString(), this, this.commonStrings!.SAVE);
    
recordStore= RecordStore.openRecordStore(this.getRecordId(abeClientInformation), true);
    

    byteArrayOutputStream: ByteArrayOutputStream = new ByteArrayOutputStream();;
    

    outputStream: DataOutputStream = new DataOutputStream(byteArrayOutputStream);;
    

    gameActionInput: Input;;
    

    list: BasicArrayList;;
    

    input: Input;;
    

    savedGameBytes: std::vector<int8_t>;;
    

    commonSeps: CommonSeps = CommonSeps.getInstance()!;;
    

    smallIntegerSingletonFactory: SmallIntegerSingletonFactory = SmallIntegerSingletonFactory.getInstance()!;;
    

    inputObjectArray: std::vector<any> = this.hashtableUtil!.getKeysAsArray(hashtable)!;;
    

    size: int32_t = inputObjectArray!.length
                ;;
    




                        for (
    index: int32_t = 0;index < size; index++)
        {
gameActionInput= inputObjectArray[index]! as Input;
    
list= hashtable.get(inputObjectArray[index]!) as BasicArrayList;
    




                        for (
    index2: int32_t = 0;index2 < list.size(); index2++)
        {

    gameActionInputIdAsString: string = smallIntegerSingletonFactory!.getAt(gameActionInput!.getId())!.toString()!;;
    
outputStream!.writeUTF(gameActionInputIdAsString);
    
outputStream!.writeUTF(commonSeps!.EQUALS);
    
input= list.objectArray[index2]! as Input;
    

    inputIdAsString: string = smallIntegerSingletonFactory!.getAt(input.getId())!.toString()!;;
    
outputStream!.writeUTF(inputIdAsString);
    
}

}

savedGameBytes= byteArrayOutputStream!.toByteArray();
    
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


};

            

