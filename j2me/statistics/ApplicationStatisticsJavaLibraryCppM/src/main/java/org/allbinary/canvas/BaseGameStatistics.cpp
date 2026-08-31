
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
        



            #include "../../../java/lang/Object.h"
        
            #include "../../../java/lang/Integer.h"
        
            #include "../../../java/lang/Long.h"
        
#include <jsinterop/annotations/JsType.h>

      
#include <org/allbinary/logic/math/PrimitiveLongSingleton.h>

      
#include <org/allbinary/logic/math/ScaleFactorFactory.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/logic/string/StringUtil.h>

      
#include <org/allbinary/string/CommonSeps.h>

      
#include <org/allbinary/time/GameTickTimeDelayHelper.h>

      
#include <org/allbinary/time/GameTickTimeDelayHelperFactory.h>

      
#include <org/allbinary/time/TimeDelayHelper.h>

      
#include <jsinterop/annotations/JsMethod.h>

      
#include <jsinterop/annotations/JsConstructor.h>

      
#include <jsinterop/annotations/JsProperty.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class BaseGameStatistics
            : public Object
         {
        

    private: const timeDelayHelper: TimeDelayHelper = new TimeDelayHelper(Integer.MAX_VALUE);

    private: const updateDelayHelper: TimeDelayHelper = new TimeDelayHelper(2000);

    private: totalRefreshes: int64_t= 0;

    private: totalFrames: int64_t= 0;

    const gameTickTimeDelayHelper: GameTickTimeDelayHelper = GameTickTimeDelayHelperFactory.getInstance()!;

public constructor (){

            super();
        }


    public init(){
this.timeDelayHelper!.setStartTimeTNT();
    
this.totalRefreshes= 0;
    
this.totalFrames= 0;
    
}


    public add(string string){
}


    public process(){
}


    public nextFrame(){
this.totalFrames++;
    
}


    public nextRefresh(){
this.totalRefreshes++;
    
}


    private: const DEFAULT_SCALE_FACTOR: int32_t = ScaleFactorFactory.getInstance()!.DEFAULT_SCALE_FACTOR;

    public int16_t getRefreshRate(){

    elapsed: int64_t = this.timeDelayHelper!.getElapsed(this.gameTickTimeDelayHelper!.startTime)!;;
    

                        if(elapsed > 1)
                        
                                    {
                                    
    time: int16_t = (this.totalRefreshes /(elapsed>>this.DEFAULT_SCALE_FACTOR));;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return time;
    

                                    }
                                
                        else {
                            


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return 0;
    

                        }
                            
}


    TimeDelayHelper getTimeDelayHelper(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.timeDelayHelper;
    
}


    const NOT: string = "Not enough Time to Calculate";

    private: const EMPTY_STRING: string = StringUtil.getInstance()!.EMPTY_STRING;

    private: const STRING_ARRAY: std::vector<string> = 
                                                        [
                                                            " Total Time: ",this.EMPTY_STRING," Total Frames: ",this.EMPTY_STRING," Frames/10 Sec: ",this.EMPTY_STRING," Total Paints: ",this.EMPTY_STRING," Paints/10 Sec: ",this.EMPTY_STRING
                                                        ];

    private: const SPACE_CHAR: char = ' ';

    private: const PLUS_CHAR: char = '+';

    private: const X_CHAR: char = 'X';

    private: const CHAR_ARRAY: std::vector<std::vector<char>> = 
                                                        [
                                                            ['F','r','a','m','e','s','/','1','0',' ','S','e','c',':'],['X','X'],['P','a','i','n','t','s','/','1','0',' ','S','e','c',':'],['X','X']
                                                        ];

    private: const primitiveLongSingleton: PrimitiveLongSingleton = PrimitiveLongSingleton.getInstance()!;

    public std::vector<std::vector<char>> to2DCharArray(){

    totalTime: int64_t = this.timeDelayHelper!.getElapsed(this.gameTickTimeDelayHelper!.startTime)!;;
    
totalTime= (totalTime>>this.DEFAULT_SCALE_FACTOR);
    

                        if(totalTime > 0 && this.updateDelayHelper!.isTime(this.gameTickTimeDelayHelper!.startTime))
                        
                                    {
                                    
    framesPerSec: int32_t = static_cast<int32_t>((this.totalFrames /totalTime));;
    

                        if(framesPerSec < 10)
                        
                                    {
                                    this.CHAR_ARRAY[1]![0]= this.SPACE_CHAR;
    
this.CHAR_ARRAY[1]![1]= this.primitiveLongSingleton!.NUMBER_CHAR_ARRAY[framesPerSec]!;
    

                                    }
                                
                             else 
                        if(framesPerSec < 100)
                        
                                    {
                                    
    tens: int32_t = framesPerSec /10;;
    

    removeTens: int32_t = tens *10;;
    
this.CHAR_ARRAY[1]![0]= this.primitiveLongSingleton!.NUMBER_CHAR_ARRAY[tens]!;
    
this.CHAR_ARRAY[1]![1]= this.primitiveLongSingleton!.NUMBER_CHAR_ARRAY[framesPerSec -removeTens]!;
    

                                    }
                                
                        else {
                            this.CHAR_ARRAY[1]![0]= this.PLUS_CHAR;
    
this.CHAR_ARRAY[1]![1]= this.PLUS_CHAR;
    

                        }
                            

    refreshesPerSec: int32_t = static_cast<int32_t>((this.totalRefreshes /totalTime));;
    

                        if(refreshesPerSec < 10)
                        
                                    {
                                    this.CHAR_ARRAY[3]![0]= this.X_CHAR;
    
this.CHAR_ARRAY[3]![1]= this.primitiveLongSingleton!.NUMBER_CHAR_ARRAY[refreshesPerSec]!;
    

                                    }
                                
                             else 
                        if(refreshesPerSec < 100)
                        
                                    {
                                    
    tens: int32_t = refreshesPerSec /10;;
    

    removeTens: int32_t = tens *10;;
    
this.CHAR_ARRAY[3]![0]= this.primitiveLongSingleton!.NUMBER_CHAR_ARRAY[refreshesPerSec /10]!;
    
this.CHAR_ARRAY[3]![1]= this.primitiveLongSingleton!.NUMBER_CHAR_ARRAY[refreshesPerSec -removeTens]!;
    

                                    }
                                
                        else {
                            this.CHAR_ARRAY[3]![0]= this.PLUS_CHAR;
    
this.CHAR_ARRAY[3]![1]= this.PLUS_CHAR;
    

                        }
                            

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.CHAR_ARRAY;
    
}


    public std::vector<string> toStringArray(){

    totalTime: int64_t = this.timeDelayHelper!.getElapsed(this.gameTickTimeDelayHelper!.startTime)!;;
    
totalTime= (totalTime /10000);
    

                        if(totalTime > 0)
                        
                                    {
                                    this.STRING_ARRAY[1]= (totalTime).toString();
    
this.STRING_ARRAY[3]= (this.totalFrames).toString();
    
this.STRING_ARRAY[5]= (this.totalFrames /totalTime).toString();
    
this.STRING_ARRAY[7]= (this.totalRefreshes).toString();
    
this.STRING_ARRAY[9]= (this.totalRefreshes /totalTime).toString();
    

                                    }
                                
                        else {
                            
    string: string = this.EMPTY_STRING;;
    
this.STRING_ARRAY[1]= string;
    
this.STRING_ARRAY[3]= string;
    
this.STRING_ARRAY[5]= string;
    
this.STRING_ARRAY[7]= string;
    
this.STRING_ARRAY[9]= string;
    

                        }
                            



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.STRING_ARRAY;
    
}


    public string toStringAt(int64_t totalTime){

    stringBuffer: StringMaker = new StringMaker();;
    
stringBuffer!.append(this.STRING_ARRAY[0]!);
    
stringBuffer!.appendlong(totalTime);
    
stringBuffer!.append(this.STRING_ARRAY[2]!);
    
stringBuffer!.appendlong(this.totalFrames);
    
stringBuffer!.append(this.STRING_ARRAY[4]!);
    
stringBuffer!.appendlong(this.totalFrames /totalTime);
    

                        if(this.totalRefreshes > 0)
                        
                                    {
                                    stringBuffer!.append(this.STRING_ARRAY[6]!);
    
stringBuffer!.appendlong(this.totalRefreshes);
    
stringBuffer!.append(this.STRING_ARRAY[8]!);
    
stringBuffer!.appendlong(this.totalRefreshes /totalTime);
    
stringBuffer!.append(CommonSeps.getInstance()!.NEW_LINE);
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return stringBuffer!.toString();;
    
}


    public string toString(){

    totalTime: int64_t = this.timeDelayHelper!.getElapsed(this.gameTickTimeDelayHelper!.startTime)!;;
    
totalTime= (totalTime /1000);
    

                        if(totalTime > 0)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.toStringAt(totalTime);;
    

                                    }
                                
                        else {
                            


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.NOT;
    

                        }
                            
}


};

            

