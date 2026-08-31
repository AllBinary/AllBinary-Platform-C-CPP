
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
        
#include <java/io/ByteArrayInputStream.h>

      
#include <java/io/DataInputStream.h>

      
#include <java/io/EOFException.h>

      
#include <java/io/IOException.h>

      
#include <java/util/Hashtable.h>

      
#include <javax/microedition/rms/RecordComparator.h>

      
#include <javax/microedition/rms/RecordEnumeration.h>

      
#include <javax/microedition/rms/RecordStore.h>

      
#include <javax/microedition/rms/RecordStoreException.h>

      
#include <javax/microedition/rms/RecordStoreNotFoundException.h>

      
#include <org/allbinary/TsUtil.h>

      
#include <org/allbinary/game/GameInfo.h>

      
#include <org/allbinary/game/configuration/persistance/NullRecordComparator.h>

      
#include <org/allbinary/game/configuration/persistance/NullRecordFilter.h>

      
#include <org/allbinary/game/configuration/persistance/NullRecordStore.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/communication/log/PreLogUtil.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/logic/system/security/licensing/AbeClientInformationInterface.h>

      
#include <org/allbinary/persistance/PlatformRecordIdUtil.h>

      
#include <org/allbinary/string/CommonSeps.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
#include <org/allbinary/util/BasicArrayList.h>

      
#include <org/allbinary/util/BasicArrayListD.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "HighScores.h"
#include "HighScore.h"
#include "ScoreComparator.h"

class RecordStoreHighScores: public HighScores {
        

    private: static const hashTable: Hashtable<any, any> = new Hashtable<any, any>();
//@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    public static HighScores getInstance(AbeClientInformationInterface abeClientInformation, GameInfo gameInfo, string highScoreName, string heading, string columnTwoHeading, RecordComparator recordComparatorInterface){

    highScoresCanBeNull: any = RecordStoreHighScores.hashTable!.get(highScoreName);;
    

                        if(highScoresCanBeNull == 
                                    null
                                )
                        
                                    {
                                    
    highScores: HighScores = new RecordStoreHighScores(abeClientInformation, gameInfo, highScoreName, heading, columnTwoHeading, recordComparatorInterface);;
    
RecordStoreHighScores.hashTable!.put(highScores!.getName(), highScores);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return highScores;
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return highScoresCanBeNull as HighScores;
    
}


    const logUtil: LogUtil = LogUtil.getInstance()!;

    private: const commonStrings: CommonStrings = CommonStrings.getInstance()!;

    private: const platformRecordIdUtil: PlatformRecordIdUtil = PlatformRecordIdUtil.getInstance()!;

    private: const tsUtil: TsUtil = TsUtil.getInstance()!;

    private: const RECORD_ID: string = "_HS";

    private: const MAXHIGHSCORES: int32_t = 100;

    private: const gameInfo: GameInfo;

    private: const abeClientInformation: AbeClientInformationInterface;

    private: const recordComparatorInterface: RecordComparator;

private constructor (AbeClientInformationInterface abeClientInformation, GameInfo gameInfo, string name, string heading, string columnTwoHeading, RecordComparator recordComparatorInterface){
            super(name, heading, columnTwoHeading);
                    

                            //For kotlin this is before the body of the constructor.
                    
this.abeClientInformation= abeClientInformation;
    
this.gameInfo= gameInfo;
    
this.recordComparatorInterface= recordComparatorInterface;
    
this.load();
    
}


    string getRecordId(AbeClientInformationInterface abeClientInformation){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.platformRecordIdUtil!.getRecordId(abeClientInformation, new StringMaker().append(CommonSeps.getInstance()!.UNDERSCORE)!.append(this.getName())!.append(this.RECORD_ID)!.toString());;
    
}

//@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    public addHighScore(HighScore newHighScore){

    recordStore: RecordStore = NullRecordStore.NULL_RECORD_STORE;;
    

        try {
            this.logUtil!.putF(new StringMaker().append("Adding HighScore: ")!.appendlong(newHighScore!.getScore())!.toString(), this, this.commonStrings!.ADD);
    

                        if(this.isTooManyHighScores())
                        
                                    {
                                    this.logUtil!.putF("Removing Lowest Score", this, this.commonStrings!.ADD);
    
this.removeLowestHighScore();
    

                                    }
                                
recordStore= RecordStore.openRecordStore(this.getRecordId(this.abeClientInformation), true);
    

    highScoreBytes: std::vector<int8_t> = newHighScore!.getAsBytes()!;;
    

    recordId: int32_t = recordStore!.addRecord(highScoreBytes, 0, highScoreBytes!.length)!;;
    
this.load();
    

                //: 
} catch(e) 
            {
this.logUtil!.put(this.commonStrings!.EXCEPTION, this, this.commonStrings!.ADD, e);
    
}

                //: 
/* catch(e) 
            {
this.logUtil!.put(this.commonStrings!.EXCEPTION, this, this.commonStrings!.ADD, e);
    
}
*/
                //: 
/* catch(e) 
            {
this.logUtil!.put(this.commonStrings!.EXCEPTION, this, this.commonStrings!.ADD, e);
    
}
*/
         finally {
            
        try {
            
                        if(recordStore != 
                                    null
                                )
                        
                                    {
                                    PreLogUtil.put("Closing RecordStore", this, this.commonStrings!.ADD);
    
recordStore!.closeRecordStore();
    

                                    }
                                

                //: 
} catch(e) 
            {
this.logUtil!.put(this.commonStrings!.EXCEPTION, this, this.commonStrings!.ADD, e);
    
}


         }
        
}


    removeLowestHighScore(){

    recordStore: RecordStore = NullRecordStore.NULL_RECORD_STORE;;
    

        try {
            recordStore= RecordStore.openRecordStore(this.getRecordId(this.abeClientInformation), true);
    

    recordEnum: RecordEnumeration = recordStore!.enumerateRecords(NullRecordFilter.NULL_RECORD_FILTER, NullRecordComparator.NULL_RECORD_COMPARATOR, true)!;;
    

    scoreComparator: ScoreComparator = (this.recordComparatorInterface as ScoreComparator);;
    

    bestHighScore: HighScore = new HighScore( -1, "none", GameInfo.NONE, scoreComparator!.getBestScore());;
    

    recordAsBytes: std::vector<int8_t>;;
    

    byteArrayInputStream: ByteArrayInputStream;;
    

    inputStream: DataInputStream;;
    

        while(recordEnum!.hasNextElement())
        {

    id: int32_t = recordEnum!.nextRecordId()!;;
    
recordAsBytes= this.tsUtil!.getRecord(recordStore, id);
    

                        if(recordAsBytes != 
                                    null
                                )
                        
                                    {
                                    byteArrayInputStream= new ByteArrayInputStream(recordAsBytes);
    
inputStream= new DataInputStream(byteArrayInputStream);
    

    name: string = inputStream!.readUTF()!;;
    

    nextScore: int64_t = inputStream!.readLong()!;;
    

    nextCurrentHighScore: HighScore = new HighScore(id, name, GameInfo.NONE, nextScore);;
    

                        if(this.recordComparatorInterface!.compare(nextCurrentHighScore!.getAsBytes(), bestHighScore!.getAsBytes()) == RecordComparatorI.FOLLOWS)
                        
                                    {
                                    bestHighScore= nextCurrentHighScore;
    

                                    }
                                

                                    }
                                
}


                        if(bestHighScore!.getId() !=  -1)
                        
                                    {
                                    this.logUtil!.putF(new StringMaker().append("Removing Lowest HighScore: ")!.appendlong(bestHighScore!.getScore())!.toString(), this, this.commonStrings!.LOAD);
    
recordStore!.deleteRecord(bestHighScore!.getId());
    

                                    }
                                

                //: 
} catch(e) 
            {
this.logUtil!.put(this.commonStrings!.EXCEPTION, this, "removeLowestHighScore", e);
    
}

                //: 
/* catch(e) 
            {
this.logUtil!.put(this.commonStrings!.EXCEPTION, this, "removeLowestHighScore", e);
    
}
*/
         finally {
            
        try {
            
                        if(recordStore != 
                                    null
                                )
                        
                                    {
                                    PreLogUtil.put("Closing RecordStore", this, "removeLowestHighScore");
    
recordStore!.closeRecordStore();
    

                                    }
                                

                //: 
} catch(e) 
            {
this.logUtil!.put(this.commonStrings!.EXCEPTION, this, "removeLowestHighScore", e);
    
}


         }
        
}


    load(){

    recordStore: RecordStore = NullRecordStore.NULL_RECORD_STORE;;
    

        try {
            recordStore= RecordStore.openRecordStore(this.getRecordId(this.abeClientInformation), true);
    
this.setList(new BasicArrayListD());
    

    recordEnum: RecordEnumeration = recordStore!.enumerateRecords(NullRecordFilter.NULL_RECORD_FILTER, NullRecordComparator.NULL_RECORD_COMPARATOR, true)!;;
    

    recordAsBytes: std::vector<int8_t>;;
    

    byteArrayInputStream: ByteArrayInputStream;;
    

    inputStream: DataInputStream;;
    

        while(recordEnum!.hasNextElement())
        {

    id: int32_t = recordEnum!.nextRecordId()!;;
    
recordAsBytes= this.tsUtil!.getRecord(recordStore, id);
    

                        if(recordAsBytes != 
                                    null
                                )
                        
                                    {
                                    byteArrayInputStream= new ByteArrayInputStream(recordAsBytes);
    
inputStream= new DataInputStream(byteArrayInputStream);
    

        try {
            
    name: string = inputStream!.readUTF()!;;
    

    score: int64_t = inputStream!.readLong()!;;
    

    newHighScore: HighScore = new HighScore(id, name, GameInfo.NONE, score);;
    

    list: BasicArrayList = this.getList()!;;
    

    size: int32_t = list.size()!;;
    

    lastIndex: int32_t = size;;
    




                        for (
    index: int32_t = 0;index < size; index++)
        {

    highScore: HighScore = list.objectArray[index]! as HighScore;;
    

                        if(this.recordComparatorInterface!.compare(newHighScore!.getAsBytes(), highScore!.getAsBytes()) == RecordComparatorI.PRECEDES)
                        
                                    {
                                    lastIndex= index;
    
break;

                    

                                    }
                                
}

list.addAt(lastIndex, newHighScore);
    

                //: 
} catch(e) 
            {
this.logUtil!.put("EOF", this, this.commonStrings!.LOAD, e);
    



                            throw e;
                    
}


                                    }
                                
}


                //: 
} catch(e) 
            {
this.logUtil!.put("No High Scores", this, this.commonStrings!.LOAD, e);
    
}

                //: 
/* catch(e) 
            {
this.logUtil!.put(this.commonStrings!.UNKNOWN, this, this.commonStrings!.LOAD, e);
    
}
*/
                //: 
/* catch(e) 
            {
this.logUtil!.put(this.commonStrings!.UNKNOWN, this, this.commonStrings!.LOAD, e);
    
}
*/
                //: 
/* catch(e) 
            {
this.logUtil!.put(this.commonStrings!.UNKNOWN, this, this.commonStrings!.LOAD, e);
    
}
*/
         finally {
            
        try {
            
                        if(recordStore != 
                                    null
                                )
                        
                                    {
                                    PreLogUtil.put("Closing RecordStore", this, this.commonStrings!.LOAD);
    
recordStore!.closeRecordStore();
    

                                    }
                                

                //: 
} catch(e) 
            {
this.logUtil!.put(this.commonStrings!.EXCEPTION, this, this.commonStrings!.LOAD, e);
    
}


         }
        
}


    bool isTooManyHighScores(){

                        if(this.getList() != 
                                    null
                                 && this.getList()!.size() < this.MAXHIGHSCORES)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return false;
    

                                    }
                                
                        else {
                            this.logUtil!.putF(new StringMaker().append("HighScores RecordStore Max Reached: ")!.appendint(this.MAXHIGHSCORES)!.toString(), this, "isTooManyHighScores");
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return true;
    

                        }
                            
}


                //@Throws(Exception.constructor)
            //@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    public bool isBestScore(HighScore newHighScore){

        try {
            
                        if(!this.isTooManyHighScores())
                        
                                    {
                                    this.logUtil!.putF("Slot Available for a High Score", this, "isBestScore");
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return true;
    

                                    }
                                
                        else {
                            
    list: BasicArrayList = this.getList()!;;
    

    size: int32_t = list.size()!;;
    




                        for (
    index: int32_t = 0;index < size; index++)
        {

    highScore: HighScore = list.objectArray[index]! as HighScore;;
    

                        if(this.recordComparatorInterface!.compare(newHighScore!.getAsBytes(), highScore!.getAsBytes()) == RecordComparatorI.FOLLOWS)
                        
                                    {
                                    this.logUtil!.putF("Obtained a High Score", this, "isBestScore");
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return true;
    

                                    }
                                
}


                        }
                            
this.logUtil!.putF("Not a High Score", this, "isBestScore");
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return false;
    

                //: 
} catch(e) 
            {
this.logUtil!.put(this.commonStrings!.EXCEPTION, this, this.commonStrings!.ADD, e);
    



                            throw e;
                    
}

}


    public string toString(){

    stringBuffer: StringMaker = new StringMaker();;
    
stringBuffer!.append(super.toString());
    

    list: BasicArrayList = this.getList()!;;
    

    size: int32_t = list.size()!;;
    




                        for (
    index: int32_t = 0;index < size; index++)
        {

    highScore: HighScore = list.objectArray[index]! as HighScore;;
    
stringBuffer!.append(highScore!.getScoreString());
    
stringBuffer!.append(CommonSeps.getInstance()!.COMMA_SEP);
    
}




                        //if statement needs to be on the same line and ternary does not work the same way.
                        return stringBuffer!.toString();;
    
}


};

            

