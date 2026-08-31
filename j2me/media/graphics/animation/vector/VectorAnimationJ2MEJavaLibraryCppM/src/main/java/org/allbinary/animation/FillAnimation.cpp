
        /* Generated Code Do Not Modify */
        



#include <javax/microedition/lcdui/Graphics.h>

      
#include <org/allbinary/graphics/color/BasicColor.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "IndexedAnimation.h"
#include "AnimationBehavior.h"

class FillAnimation: public IndexedAnimation {
        

    private: const pixelBuffer: std::vector<int32_t>;

    private: const width: int32_t;

    private: const height: int32_t;

public constructor (std::vector<int32_t> pixelBuffer, int32_t width, int32_t height, AnimationBehavior animationBehavior){
            super(animationBehavior);
                    

                            //For kotlin this is before the body of the constructor.
                    
this.width= 100;
    
this.height= 100;
    
this.pixelBuffer= pixelBuffer;
    
}


    public setBasicColorP(BasicColor basicColor){

    changed: bool = false;;
    

                        if(this.getBasicColorP() == 
                                    null
                                 || this.getBasicColorP()!.intValue() != basicColor!.intValue())
                        
                                    {
                                    changed= true;
    

                                    }
                                
super.setBasicColorP(basicColor);
    

                        if(changed)
                        
                                    {
                                    this.updateModifiers();
    

                                    }
                                
}


    public changeBasicColor(BasicColor basicColor){

    changed: bool = false;;
    

                        if(this.getChangeBasicColor() == 
                                    null
                                 || this.getChangeBasicColor()!.intValue() != basicColor!.intValue())
                        
                                    {
                                    changed= true;
    

                                    }
                                
super.changeBasicColor(basicColor);
    

                        if(changed)
                        
                                    {
                                    this.updateModifiers();
    

                                    }
                                
}


    public setAlpha(int32_t alpha){

    changed: bool = false;;
    

                        if(this.alphaP != alpha)
                        
                                    {
                                    changed= true;
    

                                    }
                                
super.setAlpha(alpha);
    

                        if(changed)
                        
                                    {
                                    this.updateModifiers();
    

                                    }
                                
}


    public setScale(float scaleX, float scaleY){
}


    public setMaxScale(float maxScaleX, float maxScaleY){
}


    updateModifiers(){
}


    paint(Graphics g){
g.drawRGB(pixelBuffer, 0, width, 0, 0, width, height, true);
    
}


};

            

