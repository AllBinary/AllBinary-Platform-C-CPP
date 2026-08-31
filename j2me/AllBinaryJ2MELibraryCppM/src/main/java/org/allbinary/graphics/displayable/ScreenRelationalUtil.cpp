
        /* Generated Code Do Not Modify */
        



            #include "../../../../java/lang/Object.h"
        
#include <javax/microedition/lcdui/Image.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "DisplayInfoSingleton.h"

class ScreenRelationalUtil
            : public Object
         {
        

    private: static const instance: ScreenRelationalUtil = new ScreenRelationalUtil();

    public static ScreenRelationalUtil getInstance(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return ScreenRelationalUtil.instance;
    
}


    public float getScaleImage(Image image){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.getScaleWH(image.getWidth(), image.getHeight());;
    
}


    public float getScaleWH(int32_t aWidth, int32_t aHeight){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.getScaleWHA(aWidth, aHeight, 20);;
    
}


    public float getScaleWHA(int32_t aWidth, int32_t aHeight, int32_t add){

    displayInfoSingleton: DisplayInfoSingleton = DisplayInfoSingleton.getInstance()!;;
    

    last: std::vector<int32_t> = displayInfoSingleton!.getLast()!;;
    

    width: float = last[displayInfoSingleton!.WIDTH]!;;
    

    height: float = last[displayInfoSingleton!.HEIGHT]!;;
    

    largestSize: float = width;;
    

                        if(largestSize < height)
                        
                                    {
                                    largestSize= height;
    

                                    }
                                

    scale: float = (largestSize) /aWidth;;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return scale;
    
}


    public int32_t getScaledHeight(int32_t aWidth, int32_t aHeight){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return static_cast<int32_t>((this.getScaleWH(aWidth, aHeight) *aHeight));
    
}


    public int32_t getScaledHeightAdd(int32_t aWidth, int32_t aHeight, int32_t add){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return static_cast<int32_t>((this.getScaleWHA(aWidth, aHeight, add) *aHeight));
    
}


};

            

