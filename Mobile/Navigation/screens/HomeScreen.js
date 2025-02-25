import React from 'react'
import {View,Text,StyleSheet} from 'react-native'

const HomeScreen =  ({route}) => {
    const phone = route.params?.phone || 'Unknown';
    return (
        <View>
            <Text>Welcome: {phone}</Text>
        </View>
    )
} 

export default HomeScreen