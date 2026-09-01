
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
        
            #include "../../../../java/lang/Object.h"
        
            #include "../../../../java/lang/Exception.h"
        
            #include "../../../../java/lang/Long.h"
        
#include <java/io/ByteArrayInputStream.h>

      
#include <java/io/DataInputStream.h>

      
#include <java/io/EOFException.h>

      
#include <java/io/IOException.h>

      
#include <javax/microedition/rms/RecordComparator.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class ScoreComparator
            : public Object
        : public RecordComparator {

    protected: const LogUtil logUtil = LogUtil::getInstance();

    private: bool isHighestBest;

public: ScoreComparator(bool isHighestBest){
this->isHighestBest= isHighestBest;
    
}


    public: int64_t getBestScore(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->isHighestBest
                        ?       
                                Long::MAX_VALUE
                                :

                            0;

    ;
    
}


    public: int32_t compare(std::vector<int8_t> recordOne, std::vector<int8_t> recordTwo){

    ByteArrayInputStream byteArrayInputStreamOne = ByteArrayInputStream(recordOne);;
    

    DataInputStream inputStreamOne = DataInputStream(byteArrayInputStreamOne);;
    

    ByteArrayInputStream byteArrayInputStreamTwo = ByteArrayInputStream(recordTwo);;
    

    DataInputStream inputStreamTwo = DataInputStream(byteArrayInputStreamTwo);;
    

    int64_t scoreOne = 0;;
    

    int64_t scoreTwo = 0;;
    

        try {
            inputStreamOne.readUTF();
    
inputStreamTwo.readUTF();
    
scoreOne= inputStreamOne.readLong();
    
scoreTwo= inputStreamTwo.readLong();
    

                //: 
} catch(e) 
            {

    CommonStrings commonStrings = CommonStrings::getInstance();;
    
this->logUtil.put(commonStrings.EXCEPTION, this, "compare", e);
    
}

                //: 
/* catch(e) 
            {

    CommonStrings commonStrings = CommonStrings::getInstance();;
    
this->logUtil.put(commonStrings.EXCEPTION, this, "compare", e);
    
}
*/
                //: 
/* catch(e) 
            {

    CommonStrings commonStrings = CommonStrings::getInstance();;
    
this->logUtil.put(commonStrings.EXCEPTION, this, "compare", e);
    
}
*/

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


    public: int32_t getHighTooLow(int64_t scoreOne, int64_t scoreTwo){

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


    public: int32_t getLowTooHigh(int64_t scoreOne, int64_t scoreTwo){

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


};

            

