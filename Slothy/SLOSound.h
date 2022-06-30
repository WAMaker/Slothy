//
//  SLOSound.h
//  Slothy
//
//  Created by WAMaker on 2022/6/27.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

// SLOSound.h
/// A sound that can be played.
/// Use an instance of this type to play a sound
/// to the user in response to an action or
/// event.
@interface SLOSound: NSObject

/// Creates a sound given its name and path on
/// disk.
///
/// - Parameters:
///   - name: The name of the sound.
///   - filePath: The path to the sound file on disk.
- (id)initWithName:(NSString *)name
          filePath:(NSString *)filepath;

@end

NS_ASSUME_NONNULL_END
