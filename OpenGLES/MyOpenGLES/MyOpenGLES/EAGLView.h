//
//  EAGLView.h
//  MyOpenGLES
//
//  Created by Michael Serna on 9/13/16.
//  Copyright (c) 2016 Michael Serna. All rights reserved.
//

#ifndef MyOpenGLES_EAGLView_h
#define MyOpenGLES_EAGLView_h

#import <UIkit/UIkit.h>
#import <QuartzCore/QuartzCore.h>
#import <OpenGLES/ES2/gl.h>
#import <OpenGLES/ES2/glext.h>

@interface EAGLView : UIView
{
    EAGLContext* context;
}

@end



#endif
