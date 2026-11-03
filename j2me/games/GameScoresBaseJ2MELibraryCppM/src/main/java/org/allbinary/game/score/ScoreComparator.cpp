
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
        



        #ifndef ORG_ALLBINARY_GAME_SCORE_SCORECOMPARATOR_CPP
        #define ORG_ALLBINARY_GAME_SCORE_SCORECOMPARATOR_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/game/score/ScoreComparator.h"
        

            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
            #include "java/lang/Long.h"
        
#include <java/io/ByteArrayInputStream.h>

      
#include <java/io/DataInputStream.h>

      
#include <java/io/EOFException.h>

      
#include <java/io/IOException.h>

      
#include <javax/microedition/rms/RecordComparator.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        

ScoreComparator::ScoreComparator(bool isHighestBest) : logUtil(LogUtil::getInstance()){
this->isHighestBest= isHighestBest;
    
}


    auto ScoreComparator::getBestScore() -> int64_t{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->isHighestBest
                        ?       
                                Long.MAX_VALUE
                                :

                            0;;
    
}


    auto ScoreComparator::compare(std::vector<int8_t> recordOne, std::vector<int8_t> recordTwo) -> int32_t{

    ByteArrayInputStream* byteArrayInputStreamOne = new ByteArrayInputStream(recordOne);;
    

    DataInputStream* inputStreamOne = new DataInputStream(byteArrayInputStreamOne);;
    

    ByteArrayInputStream* byteArrayInputStreamTwo = new ByteArrayInputStream(recordTwo);;
    

    DataInputStream* inputStreamTwo = new DataInputStream(byteArrayInputStreamTwo);;
    

    int64_t scoreOne = 0;;
    

    int64_t scoreTwo = 0;;
    

        try {
            inputStreamOne->readUTF();
    
inputStreamTwo->readUTF();
    
scoreOne= inputStreamOne->readLong();
    
scoreTwo= inputStreamTwo->readLong();
    

                //: 
} catch(EOFException& e) 
            {

    CommonStrings* commonStrings = CommonStrings::getInstance();;
    
this->logUtil->put(commonStrings->EXCEPTION, this, "compare", &e);
    
}

                //: 
 catch(IOException& e) 
            {

    CommonStrings* commonStrings = CommonStrings::getInstance();;
    
this->logUtil->put(commonStrings->EXCEPTION, this, "compare", &e);
    
}

                //: 
 catch(Exception& e) 
            {

    CommonStrings* commonStrings = CommonStrings::getInstance();;
    
this->logUtil->put(commonStrings->EXCEPTION, this, "compare", &e);
    
}


                        if(this->isHighestBest)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->getHighTooLow(scoreOne, scoreTwo);;
    

                                    }
                                
                        else {
                            


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->getLowTooHigh(scoreOne, scoreTwo);;
    

                        }
                            
}


    auto ScoreComparator::getHighTooLow(int64_t scoreOne, int64_t scoreTwo) -> int32_t{

                        if(scoreOne > scoreTwo)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return RecordComparator::PRECEDES;
    

                                    }
                                
                             else 
                        if(scoreOne < scoreTwo)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return RecordComparator::FOLLOWS;
    

                                    }
                                
                        else {
                            


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return RecordComparator::EQUIVALENT;
    

                        }
                            
}


    auto ScoreComparator::getLowTooHigh(int64_t scoreOne, int64_t scoreTwo) -> int32_t{

                        if(scoreOne < scoreTwo)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return RecordComparator::PRECEDES;
    

                                    }
                                
                             else 
                        if(scoreOne > scoreTwo)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return RecordComparator::FOLLOWS;
    

                                    }
                                
                        else {
                            


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return RecordComparator::EQUIVALENT;
    

                        }
                            
}




        #endif //ORG_ALLBINARY_GAME_SCORE_SCORECOMPARATOR_CPP
