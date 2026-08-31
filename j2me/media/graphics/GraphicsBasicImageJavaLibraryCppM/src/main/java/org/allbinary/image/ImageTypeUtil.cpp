
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
        
#include <org/allbinary/util/BasicArrayList.h>

      
#include <org/allbinary/util/BasicArrayListD.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class ImageTypeUtil
            : public Object
         {
        

    private: static SINGLETON: ImageTypeUtil = new ImageTypeUtil();

    public static ImageTypeUtil getInstance(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return ImageTypeUtil.SINGLETON;
    
}


    public const PNG: string = "png";

    public const JPG: string = "jpg";

    public const GIF: string = "gif";

    private: const list: BasicArrayList = new BasicArrayListD();

private constructor (){

            super();
        this.list.add(JPG);
    
this.list.add(GIF);
    
this.list.add(PNG);
    
}


    public bool isSupported(string mediaFileType){
mediaFileType= mediaFileType!.toLowerCase();
    




                        for (
    index: int32_t = this.list.size() -1;index >= 0; index--)
        {

    name: string = this.list.get(index) as string;;
    

                        if(mediaFileType!.compareTo(name) == 0)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return true;
    

                                    }
                                
}




                        //if statement needs to be on the same line and ternary does not work the same way.
                        return false;
    
}


};

            

