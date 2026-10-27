
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
        



            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/media/image/analysis/ColorRangeInterface.h"
#include "org/allbinary/media/image/analysis/ColorRange.h"

class ImageColorRangeResults
            : public Object
         {

    private: ColorRangeInterface* colorRangeInterface;

    private: int64_t matchingPixelsChecked= 0;

    private: int64_t totalPixelsChecked= 0;

public: ImageColorRangeResults(){
this->setColorRangeInterface(dynamic_cast<ColorRangeInterface*>(new ColorRange()));
    
}


    public: ColorRangeInterface* getColorRangeInterface(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->colorRangeInterface;
    
}


    public: void setColorRangeInterface(ColorRangeInterface* colorRangeInterface){
this->colorRangeInterface= colorRangeInterface;
    
}


    public: int64_t getMatchingPixelsChecked(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->matchingPixelsChecked;
    
}


    public: void setMatchingPixelsChecked(int64_t matchingPixelsChecked){
this->matchingPixelsChecked= matchingPixelsChecked;
    
}


    public: void addMatchingPixelsChecked(){
this->matchingPixelsChecked++;
    
}


    public: int64_t getTotalPixelsChecked(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->totalPixelsChecked;
    
}


    public: void addTotalPixelsChecked(){
this->totalPixelsChecked++;
    
}


    public: void setTotalPixelsChecked(int64_t totalPixelsChecked){
this->totalPixelsChecked= totalPixelsChecked;
    
}


    public: float getPercent(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return (this->getMatchingPixelsChecked() /this->getTotalPixelsChecked());
    
}


};

            

