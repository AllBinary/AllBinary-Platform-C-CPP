
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
        



            #include "../../../../../java/lang/Object.h"
        
            #include "../../../../../java/lang/Exception.h"
        
#include <org/allbinary/dom/DomHelper.h>

      
#include <org/allbinary/util/BasicArrayList.h>

      
#include <org/w3c/dom/Document.h>

      
#include <org/w3c/dom/Node.h>

      
#include <org/w3c/dom/NodeList.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class WorkAreaDom
            : public Object
         {
        

    public static const WORKAREA: string = "workArea";

    public static const NAME: string = "name";

    public static const FRAMES: string = "frames";

    private: name: string;

    private: canvasNodeList: BasicArrayList;

public constructor (Document document){

            super();
        
    workAreaNodeList: NodeList = document.getElementsByTagName(this.WORKAREA)!;;
    

                        if(workAreaNodeList != 
                                    null
                                )
                        
                                    {
                                    
    numberOfworkAreas: int32_t = workAreaNodeList!.getLength()!;;
    

                        if(numberOfworkAreas == 1)
                        
                                    {
                                    
    numberOfNodes: int32_t = workAreaNodeList!.getLength()!;;
    

    nameNode: Node = DomHelper.getInstance()!.searchNodeList(this.NAME, workAreaNodeList!.item(0)!.getChildNodes())!;;
    

    nameTextNode: Node = nameNode!.getFirstChild()!;;
    
this.name= nameTextNode!.getNodeValue();
    

                                    }
                                
                        else {
                            


                            throw new Exception("Wrong Number of WorkAreas: " +numberOfworkAreas);
                    

                        }
                            
this.canvasNodeList= DomHelper.getInstance()!.getChildrenWithoutTextNodes(WorkAreaDom.FRAMES, workAreaNodeList!.item(0)!.getChildNodes());
    

                                    }
                                
                        else {
                            


                            throw new Exception("workArea Node Not Found");
                    

                        }
                            
}


    public string getName(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.name;
    
}


    public BasicArrayList getCanvasNodes(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.canvasNodeList;
    
}


};

            

