
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
        



            #include "../../../../java/lang/Object.h"
        
            #include "../../../../java/lang/Exception.h"
        
            #include "../../../../java/lang/Long.h"
        
#include <jsinterop/annotations/JsType.h>

      
#include <java/io/ByteArrayOutputStream.h>

      
#include <java/io/DataOutputStream.h>

      
#include <org/allbinary/game/GameInfo.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/string/CommonSeps.h>

      
#include <jsinterop/annotations/JsMethod.h>

      
#include <jsinterop/annotations/JsConstructor.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class HighScore
            : public Object
         {
        

    private: const id: int32_t;

    private: name: string;

    private: const gameInfo: GameInfo;

    private: const score: int64_t;

    private: const scoreString: string;

public constructor (int32_t id, string name, GameInfo gameInfo, int64_t score){

            super();
        this.id= id;
    
this.name= name;
    
this.gameInfo= gameInfo;
    
this.score= score;
    
this.scoreString= (this.score).toString();
    
}


    public int32_t getId(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.id;
    
}


    public string getName(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.name;
    
}


    public int64_t getScore(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.score;
    
}


                //@Throws(Exception.constructor)
            
    public std::vector<int8_t> getAsBytes(){

    byteArrayOutputStream: ByteArrayOutputStream = new ByteArrayOutputStream();;
    

    outputStream: DataOutputStream = new DataOutputStream(byteArrayOutputStream);;
    
outputStream!.writeUTF(this.getName());
    
outputStream!.writeLong(this.getScore());
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return byteArrayOutputStream!.toByteArray();;
    
}


    public GameInfo getGameInfo(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.gameInfo;
    
}


    public string getScoreString(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.scoreString;
    
}


    public setName(string name){
this.name= name;
    
}


    public string toString(){

    commonSeps: CommonSeps = CommonSeps.getInstance()!;;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return new StringMaker().append(this.name)!.append(commonSeps!.COLON)!.appendlong(this.score)!.append(commonSeps!.FORWARD_SLASH)!.append(this.scoreString)!.toString();;
    
}


};

            

