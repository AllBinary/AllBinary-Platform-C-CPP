
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
        
            #include "../../../../../java/lang/Long.h"
        
#include <java/util/Enumeration.h>

      
#include <java/util/Hashtable.h>

      
#include <java/util/Vector.h>

      
#include <org/allbinary/game/GameInfo.h>

      
#include <org/allbinary/game/score/HighScore.h>

      
#include <org/allbinary/game/score/HighScores.h>

      
#include <org/allbinary/game/score/RemoteErrorHighScoresSingletonFactory.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/system/SoftwareInformation.h>

      
#include <org/allbinary/logic/system/security/licensing/AbeClientInformationInterface.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
#include <org/allbinary/util/EnumerationUtil.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "RemoteHighScoresProcessorFactory.h"
#include "RemoteHighScoresSubmissionProcessorFactory.h"
#include "RemoteHighScoresData.h"

class RemoteHighScores: public HighScores {
        

    private: static const hashTable: Hashtable<any, any> = new Hashtable<any, any>();
//@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    public static HighScores getInstance(AbeClientInformationInterface abeClientInformation, SoftwareInformation softwareInformation, GameInfo gameInfo, string heading, string columnTwoHeading, Boolean isAscending){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return RemoteHighScores.getInstancePreload(abeClientInformation, softwareInformation, gameInfo, heading, columnTwoHeading, isAscending, true);;
    
}

//@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    public static HighScores getInstancePreload(AbeClientInformationInterface abeClientInformation, SoftwareInformation softwareInformation, GameInfo gameInfo, string heading, string columnTwoHeading, Boolean isAscending, bool preload){

    logUtil: LogUtil = LogUtil.getInstance()!;;
    

        try {
            
    highScores: HighScores = RemoteHighScores.hashTable!.get(gameInfo) as HighScores;;
    

                        if(highScores == 
                                    null
                                )
                        
                                    {
                                    highScores= new RemoteHighScores(abeClientInformation, softwareInformation, gameInfo, heading, columnTwoHeading, isAscending, preload);
    
RemoteHighScores.hashTable!.put(gameInfo, highScores);
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return highScores;
    

                //: 
} catch(e) 
            {

    commonStrings: CommonStrings = CommonStrings.getInstance()!;;
    
logUtil!.put(commonStrings!.EXCEPTION, RemoteErrorHighScoresSingletonFactory.getInstance(), commonStrings!.GET_INSTANCE, e);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return RemoteErrorHighScoresSingletonFactory.getInstance();;
    
}

}


    const logUtil: LogUtil = LogUtil.getInstance()!;

    private: const enumerationUtil: EnumerationUtil = EnumerationUtil.getInstance()!;

    private: const abeClientInformation: AbeClientInformationInterface;

    private: const softwareInformation: SoftwareInformation;

    private: ascending: Boolean;

    public const ASCENDING: string = "ASCENDING";

private constructor (AbeClientInformationInterface abeClientInformation, SoftwareInformation softwareInformation, GameInfo gameInfo, string heading, string columnTwoHeading, Boolean ascending, bool preload){
            super(gameInfo!.toString(), heading, columnTwoHeading);
                    

                            //For kotlin this is before the body of the constructor.
                    
this.abeClientInformation= abeClientInformation;
    
this.softwareInformation= softwareInformation;
    
this.setAscending(ascending);
    

                        if(preload)
                        
                                    {
                                    RemoteHighScoresProcessorFactory.getInstance()!.process(this, this.abeClientInformation, gameInfo);
    

                                    }
                                
}


    public addHighScore(HighScore newHighScore){
RemoteHighScoresSubmissionProcessorFactory.getInstance()!.process(this, this.abeClientInformation, newHighScore);
    
}


    public update(Hashtable<any, any> hashtable){
this.getList()!.clear();
    

    vector: Vector = hashtable.get(RemoteHighScoresData.getInstance()!.HIGH_SCORES) as Vector;;
    

                        if(vector != 
                                    null
                                )
                        
                                    {
                                    
    size: int32_t = vector.length!;;
    




                        for (
    index: int32_t = 0;index < size; index++)
        {

    highScoreVector: Vector = vector.elementAt(index) as Vector;;
    

    displayName: string = highScoreVector!.elementAt(0) as string;;
    

    score: string = highScoreVector!.elementAt(1) as string;;
    

    longScore: int64_t = Long.parseLong(score)!;;
    

    highScore: HighScore = new HighScore( -1, displayName, 
                            nullptr, longScore);;
    
this.getList()!.add(highScore);
    
}


                                    }
                                
                        else {
                            
    NEXT_ELEMENT: string = "NextElement: ";;
    

    commonStrings: CommonStrings = CommonStrings.getInstance()!;;
    

    enumeration: Enumeration<any> = hashtable.elements()!;;
    

    nextElement: any;;
    

        while(this.enumerationUtil!.hasMoreElements(enumeration))
        {
nextElement= this.enumerationUtil!.nextElement(enumeration)!;
    
this.logUtil!.putF(NEXT_ELEMENT +nextElement, this, commonStrings!.PROCESS);
    
}


                        }
                            
}


    setAscending(Boolean ascending){
this.ascending= ascending;
    
}


    public Boolean getAscending(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.ascending;
    
}


    public SoftwareInformation getSoftwareInformation(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.softwareInformation;
    
}


};

            

