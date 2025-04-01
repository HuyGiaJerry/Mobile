import React from 'react';
import {View, Text, StyleSheet} from 'react-native';

const Square = ({title, backgroundColor}) => {
    return (
        <View style={[styles.container,{backgroundColor}]}>
            <Text>{title}</Text>
        </View>
    );
};

const styles = StyleSheet.create({
    container: {
    width: '25%',
    height: '15%',
    display: 'flex',
    justifyContent: 'center',
    alignItems: 'center',
    
    },
});

export default Square;