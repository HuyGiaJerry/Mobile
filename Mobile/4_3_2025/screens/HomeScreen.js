import React from 'react'
import { StyleSheet, Text, View } from 'react-native'
const HomeScreen = () => {

    return (
        <View style={styles.container}>
            <Text>Home Screen</Text>
        </View>
    )
}
const styles = StyleSheet.create({
    container: {
        flex: 1,
        backgroundColor: '#fff',
        alignItems: 'center',
        justifyContent: 'center',
        marginTop: 30,
    }
})

export default HomeScreen