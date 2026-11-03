
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
        



        #ifndef ORG_ALLBINARY_CANVAS_BASEGAMESTATISTICS_CPP
        #define ORG_ALLBINARY_CANVAS_BASEGAMESTATISTICS_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/canvas/BaseGameStatistics.h"
        

            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Integer.h"
        
            #include "java/lang/Long.h"
        
#include <org/allbinary/logic/math/PrimitiveLongSingleton.h>

      
#include <org/allbinary/logic/math/ScaleFactorFactory.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/logic/string/StringUtil.h>

      
#include <org/allbinary/string/CommonSeps.h>

      
#include <org/allbinary/time/GameTickTimeDelayHelper.h>

      
#include <org/allbinary/time/GameTickTimeDelayHelperFactory.h>

      
#include <org/allbinary/time/TimeDelayHelper.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        

BaseGameStatistics::BaseGameStatistics() : timeDelayHelper(new TimeDelayHelper(Integer.MAX_VALUE)), updateDelayHelper(new TimeDelayHelper(2000)), gameTickTimeDelayHelper(GameTickTimeDelayHelperFactory::getInstance()), DEFAULT_SCALE_FACTOR(ScaleFactorFactory::getInstance()->DEFAULT_SCALE_FACTOR), EMPTY_STRING(StringUtil::getInstance()->EMPTY_STRING), STRING_ARRAY(
                                                        {
                                                            " Total Time: ",this->EMPTY_STRING," Total Frames: ",this->EMPTY_STRING," Frames/10 Sec: ",this->EMPTY_STRING," Total Paints: ",this->EMPTY_STRING," Paints/10 Sec: ",this->EMPTY_STRING
                                                        }), CHAR_ARRAY(
                                                        {
                                                            {'F','r','a','m','e','s','/','1','0',' ','S','e','c',':'},{'X','X'},{'P','a','i','n','t','s','/','1','0',' ','S','e','c',':'},{'X','X'}
                                                        }), primitiveLongSingleton(PrimitiveLongSingleton::getInstance()){
}


    auto BaseGameStatistics::init() -> void{
this->timeDelayHelper->setStartTimeTNT();
    
this->totalRefreshes= 0;
    
this->totalFrames= 0;
    
}


    auto BaseGameStatistics::add(std::string string) -> void{
}


    auto BaseGameStatistics::process() -> void{
}


    auto BaseGameStatistics::nextFrame() -> void{
this->totalFrames++;
    
}


    auto BaseGameStatistics::nextRefresh() -> void{
this->totalRefreshes++;
    
}


    auto BaseGameStatistics::getRefreshRate() -> int16_t{

    int64_t elapsed = this->timeDelayHelper->getElapsed(this->gameTickTimeDelayHelper->startTime);;
    

                        if(elapsed > 1)
                        
                                    {
                                    
    int16_t time = (this->totalRefreshes /(elapsed>>this->DEFAULT_SCALE_FACTOR));;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return time;
    

                                    }
                                
                        else {
                            


                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return 0;
    

                        }
                            
}


    auto BaseGameStatistics::getTimeDelayHelper() -> TimeDelayHelper*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->timeDelayHelper;
    
}


    auto BaseGameStatistics::to2DCharArray() -> std::vector<std::vector<char>>{

    int64_t totalTime = this->timeDelayHelper->getElapsed(this->gameTickTimeDelayHelper->startTime);;
    
totalTime= (totalTime>>this->DEFAULT_SCALE_FACTOR);
    

                        if(totalTime > 0 && this->updateDelayHelper->isTime(this->gameTickTimeDelayHelper->startTime))
                        
                                    {
                                    
    int32_t framesPerSec = static_cast<int32_t>((this->totalFrames /totalTime));;
    

                        if(framesPerSec < 10)
                        
                                    {
                                    this->CHAR_ARRAY[1][0]= this->SPACE_CHAR;
    
this->CHAR_ARRAY[1][1]= this->primitiveLongSingleton->NUMBER_CHAR_ARRAY[framesPerSec];
    

                                    }
                                
                             else 
                        if(framesPerSec < 100)
                        
                                    {
                                    
    int32_t tens = framesPerSec /10;;
    

    int32_t removeTens = tens *10;;
    
this->CHAR_ARRAY[1][0]= this->primitiveLongSingleton->NUMBER_CHAR_ARRAY[tens];
    
this->CHAR_ARRAY[1][1]= this->primitiveLongSingleton->NUMBER_CHAR_ARRAY[framesPerSec -removeTens];
    

                                    }
                                
                        else {
                            this->CHAR_ARRAY[1][0]= this->PLUS_CHAR;
    
this->CHAR_ARRAY[1][1]= this->PLUS_CHAR;
    

                        }
                            

    int32_t refreshesPerSec = static_cast<int32_t>((this->totalRefreshes /totalTime));;
    

                        if(refreshesPerSec < 10)
                        
                                    {
                                    this->CHAR_ARRAY[3][0]= this->X_CHAR;
    
this->CHAR_ARRAY[3][1]= this->primitiveLongSingleton->NUMBER_CHAR_ARRAY[refreshesPerSec];
    

                                    }
                                
                             else 
                        if(refreshesPerSec < 100)
                        
                                    {
                                    
    int32_t tens = refreshesPerSec /10;;
    

    int32_t removeTens = tens *10;;
    
this->CHAR_ARRAY[3][0]= this->primitiveLongSingleton->NUMBER_CHAR_ARRAY[refreshesPerSec /10];
    
this->CHAR_ARRAY[3][1]= this->primitiveLongSingleton->NUMBER_CHAR_ARRAY[refreshesPerSec -removeTens];
    

                                    }
                                
                        else {
                            this->CHAR_ARRAY[3][0]= this->PLUS_CHAR;
    
this->CHAR_ARRAY[3][1]= this->PLUS_CHAR;
    

                        }
                            

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->CHAR_ARRAY;
    
}


    auto BaseGameStatistics::toStringArray() -> std::vector<std::string>{

    int64_t totalTime = this->timeDelayHelper->getElapsed(this->gameTickTimeDelayHelper->startTime);;
    
totalTime= (totalTime /10000);
    

                        if(totalTime > 0)
                        
                                    {
                                    this->STRING_ARRAY[1]= std::to_string(totalTime);
    
this->STRING_ARRAY[3]= std::to_string(this->totalFrames);
    
this->STRING_ARRAY[5]= std::to_string(this->totalFrames /totalTime);
    
this->STRING_ARRAY[7]= std::to_string(this->totalRefreshes);
    
this->STRING_ARRAY[9]= std::to_string(this->totalRefreshes /totalTime);
    

                                    }
                                
                        else {
                            
    std::string string = this->EMPTY_STRING;;
    
this->STRING_ARRAY[1]= string;
    
this->STRING_ARRAY[3]= string;
    
this->STRING_ARRAY[5]= string;
    
this->STRING_ARRAY[7]= string;
    
this->STRING_ARRAY[9]= string;
    

                        }
                            



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->STRING_ARRAY;
    
}


    auto BaseGameStatistics::toStringAt(int64_t totalTime) -> std::string{

    StringMaker* stringBuffer = new StringMaker();;
    
stringBuffer->append(this->STRING_ARRAY[0]);
    
stringBuffer->appendlong(totalTime);
    
stringBuffer->append(this->STRING_ARRAY[2]);
    
stringBuffer->appendlong(this->totalFrames);
    
stringBuffer->append(this->STRING_ARRAY[4]);
    
stringBuffer->appendlong(this->totalFrames /totalTime);
    

                        if(this->totalRefreshes > 0)
                        
                                    {
                                    stringBuffer->append(this->STRING_ARRAY[6]);
    
stringBuffer->appendlong(this->totalRefreshes);
    
stringBuffer->append(this->STRING_ARRAY[8]);
    
stringBuffer->appendlong(this->totalRefreshes /totalTime);
    
stringBuffer->append(CommonSeps::getInstance()->NEW_LINE);
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return stringBuffer->toString();;
    
}


    auto BaseGameStatistics::toString() -> std::string{

    int64_t totalTime = this->timeDelayHelper->getElapsed(this->gameTickTimeDelayHelper->startTime);;
    
totalTime= (totalTime /1000);
    

                        if(totalTime > 0)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->toStringAt(totalTime);;
    

                                    }
                                
                        else {
                            


                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->NOT;
    

                        }
                            
}




        #endif //ORG_ALLBINARY_CANVAS_BASEGAMESTATISTICS_CPP
