
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
        
class BaseGameStatistics
            : public Object
         {

    private: TimeDelayHelper* timeDelayHelper = new TimeDelayHelper(Integer.MAX_VALUE);

    private: TimeDelayHelper* updateDelayHelper = new TimeDelayHelper(2000);

    private: int64_t totalRefreshes= 0;

    private: int64_t totalFrames= 0;

    protected: GameTickTimeDelayHelper* gameTickTimeDelayHelper = GameTickTimeDelayHelperFactory::getInstance();

public: BaseGameStatistics(){
}


    public: void init(){
this->timeDelayHelper->setStartTimeTNT();
    
this->totalRefreshes= 0;
    
this->totalFrames= 0;
    
}


    public: void add(std::string string){
}


    public: void process(){
}


    public: void nextFrame(){
this->totalFrames++;
    
}


    public: void nextRefresh(){
this->totalRefreshes++;
    
}


    private: const int32_t DEFAULT_SCALE_FACTOR = ScaleFactorFactory::getInstance()->DEFAULT_SCALE_FACTOR;

    public: int16_t getRefreshRate(){

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


    protected: TimeDelayHelper* getTimeDelayHelper(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->timeDelayHelper;
    
}


    protected: const std::string NOT = "Not enough Time to Calculate";

    private: const std::string EMPTY_STRING = StringUtil::getInstance()->EMPTY_STRING;

    private: const std::vector<std::string> STRING_ARRAY = 
                                                        {
                                                            " Total Time: ",this->EMPTY_STRING," Total Frames: ",this->EMPTY_STRING," Frames/10 Sec: ",this->EMPTY_STRING," Total Paints: ",this->EMPTY_STRING," Paints/10 Sec: ",this->EMPTY_STRING
                                                        };

    private: const char SPACE_CHAR = ' ';

    private: const char PLUS_CHAR = '+';

    private: const char X_CHAR = 'X';

    private: const std::vector<std::vector<char>> CHAR_ARRAY = 
                                                        {
                                                            ['F','r','a','m','e','s','/','1','0',' ','S','e','c',':'],['X','X'],['P','a','i','n','t','s','/','1','0',' ','S','e','c',':'],['X','X']
                                                        };

    private: PrimitiveLongSingleton* primitiveLongSingleton = PrimitiveLongSingleton::getInstance();

    public: std::vector<std::vector<char>> to2DCharArray(){

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


    public: std::vector<std::string> toStringArray(){

    int64_t totalTime = this->timeDelayHelper->getElapsed(this->gameTickTimeDelayHelper->startTime);;
    
totalTime= (totalTime /10000);
    

                        if(totalTime > 0)
                        
                                    {
                                    this->STRING_ARRAY[1]= std::to_string(totalTime);
    
this->STRING_ARRAY[3]= std::to_string(totalFrames);
    
this->STRING_ARRAY[5]= std::to_string();
    
this->STRING_ARRAY[7]= std::to_string(totalRefreshes);
    
this->STRING_ARRAY[9]= std::to_string();
    

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


    public: std::string toStringAt(int64_t totalTime){

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


    public: std::string toString(){

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


};

            

