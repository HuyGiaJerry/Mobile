import React from 'react';
import { View, Text, StyleSheet } from 'react-native';

const OrderScreen = () => {
    return (
        <View style={styles.container}>
            <Text style={styles.text}>Order Screen</Text>
        </View>
    );
};

const styles = StyleSheet.create({
    container: {
        flex: 1,
        justifyContent: 'center',
        alignItems: 'center',
        backgroundColor: '#fff',
    },
    text: {
        fontSize: 18,
        fontWeight: 'bold',
    },
});

export default OrderScreen;