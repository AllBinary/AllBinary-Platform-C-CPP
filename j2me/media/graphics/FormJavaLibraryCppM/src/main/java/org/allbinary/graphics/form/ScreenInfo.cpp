
        /* Generated Code Do Not Modify */
        



            #include "../../../../java/lang/Object.h"
        
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class ScreenInfo
            : public Object
         {
        

    private: static const instance: ScreenInfo = new ScreenInfo();

    public static ScreenInfo getInstance(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return ScreenInfo.instance;
    
}


    public const SMALL_WIDTH: int32_t = 320;

    public const SMALL_HEIGHT: int32_t = 240;

    public const MEDIUM_WIDTH: int32_t = 800;

    public const MEDIUM_HEIGHT: int32_t = 600;

};

            

